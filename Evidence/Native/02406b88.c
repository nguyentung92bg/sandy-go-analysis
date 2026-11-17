/* IL2CPP: Dino.BusSand.App.UI.KitParts$$Label
TMPro_TMP_Text_o* Dino_BusSand_App_UI_KitParts__Label (UnityEngine_RectTransform_o* button, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$Label
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_KitParts__Label (UnityEngine_RectTransform_o* button, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitParts__Label_2306b88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  
                    /* try { // try from 02406b88 to 02506b93 has its CatchHandler @ 024073ec */
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c54a & 1) == 0) {
                    /* try { // try from 02406ba8 to 02506bb3 has its CatchHandler @ 02407410 */
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7f80);
                    /* try { // try from 02406bcc to 02506bdb has its CatchHandler @ 024073cc */
    bRam0000000004f9c54a = 1;
  }
  puVar2 = PTR_DAT_04cb7f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02406bec to 02506bf7 has its CatchHandler @ 02407408 */
  lVar3 = Dino_BusSand_App_UI_UiKit__Part_228d094(param_1,*(undefined8 *)puVar2,0);
  if (lVar3 != 0) {
    lVar4 = *(long *)PTR_DAT_04cad790;
    lVar5 = *(long *)(lVar4 + 0x38);
                    /* try { // try from 02406c10 to 02506c23 has its CatchHandler @ 024073c8 */
    if (lVar5 == 0) {
      FUN_0216b4cc(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    uStack_28 = 0;
    uVar6 = *(undefined8 *)(lVar5 + 8);
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
    UnityEngine_Component__GetComponentFastPath_43bcf7c(lVar3,uVar6,&uStack_28,0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

