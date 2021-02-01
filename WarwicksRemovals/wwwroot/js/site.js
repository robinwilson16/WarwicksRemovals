jQuery.event.special.touchstart = {
    setup: function (_, ns, handle) {
        this.addEventListener("touchstart", handle, { passive: true });
    }
};

//Load quote into box on home page
//loadQuote();

function loadQuote() {
    var dataToLoad = "/Quotes/Create";

    var loadFormData = $.get(dataToLoad, function (data) {

    })
        .then(data => {
            var formData = $(data).find("#QuoteForm");
            $("#NewQuoteArea").html(formData);

            quoteLoadedFunctions();
            console.log(dataToLoad + " Loaded");
        })
        .fail(function () {
            let title = `Error Loading New Quote Form`;
            let content = `The new quote form returned a server error and could not be loaded`;

            doErrorModal(title, content);
        });
}

//quoteLoadedFunctions();
function quoteLoadedFunctions() {
    $(".QuoteButton").click(function (event) {
        //event.preventDefault();
        let form = $("#SubmitQuote");

        form.removeData('validator');
        form.removeData('unobtrusiveValidation');
        $.validator.unobtrusive.parse(form);

        let buttonType = $(this).attr("type");
        let stepID = parseInt($(this).attr("data-id"));
        let direction = $(this).attr("data-slide");
        let currentPercentage = parseInt($("#QuoteProgress").attr("aria-valuenow"));
        let newPercentage = 0;
        let interval = 25;

        let canContinue = false;
        switch (stepID) {
            case 1:
                if (stepID === 1 && step1Valid() === true) {
                    canContinue = true;
                }
                break;
            case 2:
                if (stepID === 2 && step2Valid() === true) {
                    canContinue = true;
                }
                break;
            case 3:
                if (stepID === 3 && step3Valid() === true) {
                    canContinue = true;
                }
                break;
            default:
                canContinue = true;
                break;
        }

        if (canContinue === true) {
            if (direction === "prev") {
                newPercentage = currentPercentage - interval;
            }
            else {
                newPercentage = currentPercentage + interval;
            }

            if (newPercentage < 0) {
                newPercentage = 0;
            }
            else if (newPercentage > 100) {
                newPercentage = 100;
            }

            $("#carouselQuoteForm").carousel(direction);
            $("#QuoteProgress").attr("style", "width: " + parseInt(newPercentage) + "%");
            $("#QuoteProgress").attr("aria-valuenow", newPercentage);
            $("#QuoteProgress").html(newPercentage + "%");
        }

        //Save Quote To Cookie
        saveQuoteInProgress();
    });

    $("#SubmitQuote").submit(function (event) {
        event.preventDefault();

        if ($("#SubmitQuote").valid() === true) {
            let formData = $('#SubmitQuote').serialize();
            //$("body").append(formData);

            let formDestinationID = "http://rm-warwicksremovals.co.uk/survey.php"

            let formItems = formData.split("&");

            let formItemsArray = {};
            formItems.sort();

            for (const element of formItems) {
                let formElement = element.replace("RemovalQuote.", "");

                //Replace HTML encoded characters
                formElement = formElement.replace(/%20/g, " ");
                formElement = formElement.replace(/%40/g, "@");
                formElement = formElement.replace(/%0D/g, "\r");
                formElement = formElement.replace(/%0A/g, "\n");

                //Specific replacements for this form
                formElement = formElement.replace("Title", "salutationID");
                formElement = formElement.replace("Forename", "customerFirstname");
                formElement = formElement.replace("Surname", "customerSurname");
                formElement = formElement.replace("Company", "companyName");
                formElement = formElement.replace("MoveDate", "quoteDateApprox");
                formElement = formElement.replace("TelNumber", "customerTel");
                formElement = formElement.replace("TelExtension", "customerExt");
                formElement = formElement.replace("Mobile", "customerMobile");
                formElement = formElement.replace("Email", "customerEmail");
                formElement = formElement.replace("FromAddress1", "depAddress1");
                formElement = formElement.replace("FromAddress2", "depAddress2");
                formElement = formElement.replace("FromAddress3", "depAddress3");
                formElement = formElement.replace("FromAddress4", "depAddress4");
                formElement = formElement.replace("FromPostcode", "depPostcode");
                formElement = formElement.replace("FromPostcode", "depPostcode");
                formElement = formElement.replace("FromPropertyType", "property_typeID");
                formElement = formElement.replace("FromNumBedrooms", "pfBeds");
                formElement = formElement.replace("ToStorage", "inStorage");
                formElement = formElement.replace("ToAddress1", "destAddress1");
                formElement = formElement.replace("ToAddress2", "destAddress2");
                formElement = formElement.replace("ToAddress3", "destAddress3");
                formElement = formElement.replace("ToAddress4", "destAddress4");
                formElement = formElement.replace("ToPostcode", "destPostcode");
                formElement = formElement.replace("ToPropertyType", "property_typeIDTo");
                formElement = formElement.replace("ToNumBedrooms", "pfBedsTo");
                formElement = formElement.replace("Comments", "privateNote");

                let splitPos = formElement.indexOf("=");
                let fldLen = formElement.length;
                let includeField = true;

                if (element.indexOf("__RequestVerificationToken") > -1) {
                    includeField = false;
                }

                //Discard empty elements
                //if (splitPos < fldLen - 1 && includeField === true) {
                //    let key = formElement.substring(0, splitPos);
                //    let value = formElement.substring(splitPos + 1, fldLen);

                //    formItemsArray[key] = value;
                //}

                if (includeField === true) {
                    let key = formElement.substring(0, splitPos);
                    let value = formElement.substring(splitPos + 1, fldLen);

                    formItemsArray[key] = value;
                }
            }

            postAndRedirect(formDestinationID, formItemsArray);
        }
    });
}

function saveQuoteInProgress() {
    let today = new Date();
    let expiry = new Date(today.getTime() + 30 * 24 * 3600 * 1000); // plus 30 days

    let formData = $('#SubmitQuote').serialize();
    let formItems = formData.split("&");
    formItems.sort();

    document.cookie = `RemovalQuoteData=${formData}; path=/; expires=${expiry.toGMTString()}`;
}

function postAndRedirect(url, postData) {
    var postFormStr = `<form target="_blank" method="POST" action="${url}">\n`;

    //Extra field needed
    postFormStr += `<input type="hidden" name="p" value="2">`;

    for (var key in postData) {
        if (postData.hasOwnProperty(key)) {
            postFormStr += `<input type="hidden" name="${key}" value="${postData[key]}"></input>`;
        }
    }

    postFormStr += "</form>";

    var formToSubmit = $(postFormStr);

    $("body").append(formToSubmit);
    //$("#QuoteDataToSubmit").append(formToSubmit);
    $(formToSubmit).submit();
}

function step1Valid() {
    let validator = $("form").validate();
    let titleValid = validator.element("#RemovalQuote_Title");
    let forenameValid = validator.element("#RemovalQuote_Forename");
    let surnameValid = validator.element("#RemovalQuote_Surname");
    let companyValid = validator.element("#RemovalQuote_Company");
    let moveDateValid = validator.element("#RemovalQuote_MoveDate");
    let telNumberValid = validator.element("#RemovalQuote_TelNumber");
    let telExtensionValid = validator.element("#RemovalQuote_TelExtension");
    let mobileValid = validator.element("#RemovalQuote_Mobile");
    let emailValid = validator.element("#RemovalQuote_Email");

    if (
        titleValid === true
        && forenameValid === true
        && surnameValid === true
        && companyValid === true
        && moveDateValid === true
        && telNumberValid === true
        && telExtensionValid === true
        && mobileValid === true
        && emailValid === true
    ) {
        return true;
    }
    else {
        return false;
    }
}

function step2Valid() {
    let validator = $("form").validate();
    let fromAddress1Valid = validator.element("#RemovalQuote_FromAddress1");
    let fromAddress2Valid = validator.element("#RemovalQuote_FromAddress2");
    let fromAddress3Valid = validator.element("#RemovalQuote_FromAddress3");
    let fromAddress4Valid = validator.element("#RemovalQuote_FromAddress4");
    let fromPostcodeValid = validator.element("#RemovalQuote_FromPostcode");
    let fromPropertyTypeValid = validator.element("#RemovalQuote_FromPropertyType");
    let fromNumBedroomsValid = validator.element("#RemovalQuote_FromNumBedrooms");
    let isMovingToStorageValid = validator.element("#RemovalQuote_IsMovingToStorage");
    let toAddress1Valid = validator.element("#RemovalQuote_ToAddress1");
    let toAddress2Valid = validator.element("#RemovalQuote_ToAddress2");
    let toAddress3Valid = validator.element("#RemovalQuote_ToAddress3");
    let toAddress4Valid = validator.element("#RemovalQuote_ToAddress4");
    let toPostcodeValid = validator.element("#RemovalQuote_ToPostcode");
    let toPropertyTypeValid = validator.element("#RemovalQuote_ToPropertyType");
    let toNumBedroomsValid = validator.element("#RemovalQuote_ToNumBedrooms");

    if (
        fromAddress1Valid === true
        && fromAddress2Valid === true
        && fromAddress3Valid === true
        && fromAddress4Valid === true
        && fromPostcodeValid === true
        && fromPropertyTypeValid === true
        && fromNumBedroomsValid === true
        && isMovingToStorageValid === true
        && toAddress1Valid === true
        && toAddress2Valid === true
        && toAddress3Valid === true
        && toAddress4Valid === true
        && toPostcodeValid === true
        && toPropertyTypeValid === true
        && toNumBedroomsValid === true
    ) {
        return true;
    }
    else {
        return false;
    }
}

function step3Valid() {
    let validator = $("form").validate();
    let commentsValid = validator.element("#RemovalQuote_Comments");

    if (
        commentsValid === true
    ) {
        return true;
    }
    else {
        return false;
    }
}