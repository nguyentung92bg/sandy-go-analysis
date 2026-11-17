/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$AddQaCorner
void Dino_BusSand_App_UI_SettingPanel__AddQaCorner (Dino_BusSand_App_UI_KitWindow_o* w, System_Action_o* reopen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$AddQaCorner
   void Dino_BusSand_App_UI_SettingPanel__AddQaCorner (Dino_BusSand_App_UI_KitWindow_o* w,
   System_Action_o* reopen, const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingPanel__AddQaCorner_2305778(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar1 = PTR_DAT_04cb7e88;
  if ((bRam0000000004f9c4fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7e90);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cb7e98);
    FUN_02132f7c(PTR_DAT_04cb7e88);
                    /* try { // try from 024057e8 to 025057ef has its CatchHandler @ 0240583c */
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7ea0);
                    /* try { // try from 02405800 to 02505807 has its CatchHandler @ 02405838 */
    bRam0000000004f9c4fa = 1;
  }
                    /* try { // try from 02405808 to 0250582f has its CatchHandler @ 024056ac */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x10),param_2);
    uVar3 = Dino_BusSand_App_UI_SettingPanel__get_QaVisible_23056fc();
                    /* try { // try from 02405830 to 02505833 has its CatchHandler @ 02405834 */
    if ((uVar3 & 1) != 0) {
      return;
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02405830 with catch @ 02405834
                       try { // try from 02405834 to 02505857 has its CatchHandler @ 024056ac */
    if (param_1 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02405800 with catch @ 02405838
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024057e8 with catch @ 0240583c
                        */
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
                    /* try { // try from 02405858 to 0250585b has its CatchHandler @ 02405874 */
        cRam0000000004f9b948 = '\x01';
      }
                    /* try { // try from 0240585c to 02505877 has its CatchHandler @ 024056ac */
                    /* catch() { ... } // from try @ 02405858 with catch @ 02405874 */
                    /* try { // try from 02405878 to 0250587f has its CatchHandler @ 02405888 */
                    /* try { // try from 02405880 to 0250588b has its CatchHandler @ 024056ac */
      uVar6 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
      uVar7 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02405878 with catch @ 02405888
                        */
      uStack_48 = 0;
      uStack_50 = 0;
      System_Nullable_Vector2____ctor_2bd0a48
                (0,0x3f800000,&uStack_50,*(undefined8 *)PTR_DAT_04cb4e90);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                        (0x43160000,0x43160000,uVar6,uVar7,uVar5,*(undefined8 *)PTR_DAT_04cb7ea0,
                         uStack_50,uStack_48,0);
      if (lVar4 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x42960000,0xc2960000,lVar4,0);
        Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar4,0);
        lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
        if (lVar4 != 0) {
          lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar4,*(undefined8 *)PTR_DAT_04cb7e90);
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb7e98,0);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x20) = uVar5;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),uVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

