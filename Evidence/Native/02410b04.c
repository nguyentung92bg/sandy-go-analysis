/* IL2CPP: Dino.BusSand.App.UI.KitParts$$MultTag
TMPro_TMP_Text_o* Dino_BusSand_App_UI_KitParts__MultTag (UnityEngine_RectTransform_o* button, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitParts$$MultTag
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_KitParts__MultTag (UnityEngine_RectTransform_o* button,
   System_String_o* text, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitParts__MultTag_2310b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cb61a0;
                    /* try { // try from 02410b14 to 02510b1b has its CatchHandler @ 02410c0c */
  if ((bRam0000000004f9c54c & 1) == 0) {
                    /* try { // try from 02410b34 to 02510bb3 has its CatchHandler @ 02410c50 */
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb61a0);
    bRam0000000004f9c54c = 1;
  }
  uStack_28 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar2 = Dino_BusSand_App_UI_KitParts__HangTag_231069c
                    (_UNK_00e205e8,0x42840000,param_1,*(undefined8 *)puVar1,param_2,&uStack_28,
                     *(undefined8 *)puVar1,&uStack_48);
  puVar1 = PTR_DAT_04cad4c0;
  if (lVar2 != 0) {
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,lVar2,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f800000,0x3f800000,lVar2,0);
                    /* try { // try from 02410bc8 to 02510bcb has its CatchHandler @ 02410c48 */
                    /* try { // try from 02410bcc to 02510bd3 has its CatchHandler @ 02410c4c */
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0xc2200000,0x41900000,lVar2,0);
                    /* try { // try from 02410bd4 to 02510bd7 has its CatchHandler @ 02410c24 */
                    /* try { // try from 02410bd8 to 02510bdb has its CatchHandler @ 02410c1c */
                    /* try { // try from 02410bdc to 02510bdf has its CatchHandler @ 02410c50 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02410be0 to 02510be3 has its CatchHandler @ 02410c44 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02410be4 to 02510be7 has its CatchHandler @ 02410c38 */
                    /* try { // try from 02410be8 to 02510beb has its CatchHandler @ 02410c34 */
                    /* try { // try from 02410bec to 02510bef has its CatchHandler @ 02410c14 */
                    /* try { // try from 02410bf0 to 02510bfb has its CatchHandler @ 02410c4c */
                    /* try { // try from 02410bfc to 02510c07 has its CatchHandler @ 02410c50 */
                    /* try { // try from 02410c08 to 02510c0b has its CatchHandler @ 02410c10 */
                    /* catch() { ... } // from try @ 02410b14 with catch @ 02410c0c
                       try { // try from 02410c0c to 02510c6b has its CatchHandler @ 02410864 */
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0x3f000000,_UNK_00e207cc,_UNK_00e207cc,_UNK_00e20184,lVar2,0,0,0);
                    /* catch() { ... } // from try @ 02410c08 with catch @ 02410c10 */
                    /* catch() { ... } // from try @ 02410bec with catch @ 02410c14 */
                    /* catch() { ... } // from try @ 02410ae4 with catch @ 02410c18 */
                    /* catch() { ... } // from try @ 02410bd8 with catch @ 02410c1c */
                    /* catch() { ... } // from try @ 02410988 with catch @ 02410c20 */
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02410bd4 with catch @ 02410c24 */
  FUN_02133224();
}

