class NSalException extends Exception {
    public NSalException(String s) {
        super(s);
    }
}

class PSalException extends RuntimeException {
    public PSalException(String s) {
        super(s);
    }
}

class Employee {
    public void decideSal(String s1) throws NSalException, PSalException,
            NumberFormatException {
        int sal = Integer.parseInt(s1);
        if (sal <= 0) {
            NSalException no = new NSalException("Invalid Salary");
            throw (no);
        } else {
            PSalException po = new PSalException("Valid Salary");
            throw (po);
        }
    }
}

class Exp13 {
    public static void main(String args[]) {
        try {
            Employee e = new Employee();
            e.decideSal(args[0]);
        } catch (NumberFormatException nfe) {
            System.err.println("Please enter integer values.");
        } catch (NSalException no) {
            System.err.println("Negative Salary.");
        } catch (PSalException po) {
            System.err.println("Valid Positive Salary.");
        } finally {
            System.out.println("Finally Block executing");
        }
    }
}