document.getElementById('submit-recommendation').addEventListener('click', function() {
    const recommenderName = document.getElementById('recommender-name').value.trim();
    const recommendationText = document.getElementById('recommendation-input').value.trim();

    if (recommendationText) {
        // Create a new div element for the recommendation
        const newRecommendation = document.createElement('div');
        // newRecommendation.setAttribute("class", "recommendation-box");
        newRecommendation.classList.add('recommendation-box');
        // newRecommendation.innerHTML = `<p>"${recommendationText}" ${recommenderName ? `- ${recommenderName}` : ''}</p>`;
        newRecommendation.innerHTML = '<p>"' + recommendationText + '"</p><p>- '+ recommenderName +'</p>';

        // Append the new recommendation to the recommendation list
        document.getElementById('recommendation-container').appendChild(newRecommendation);

        // Show the popup
        document.getElementById('popup').style.display = 'block';

        // Clear the input fields
        document.getElementById('recommender-name').value = '';
        document.getElementById('recommendation-input').value = '';
    } else {
        alert('Please enter a message.');
    }
});

// Close popup button functionality
document.getElementById('close-popup').addEventListener('click', function() {
    document.getElementById('popup').style.display = 'none';
});

function scrollToTop() {
    window.scrollTo({
        top:0,
        behavior: 'smooth'
    });
}
