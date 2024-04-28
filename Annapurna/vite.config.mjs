
  import { defineConfig } from 'vite'
  import react from '@vitejs/plugin-react'
  import { babel } from '@rollup/plugin-babel';
  
  // https://vitejs.dev/config/
  export default defineConfig({
    esbuild: {
      loader: {
        '.js': 'jsx'
      }
    },
    plugins: [babel({
      presets: ['@babel/preset-react']
    })],
  })


