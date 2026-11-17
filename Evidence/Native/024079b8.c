/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnOpen
void Dino_BusSand_App_UI_HudPanel__OnOpen (Dino_BusSand_App_UI_HudPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02407e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnOpen
   void Dino_BusSand_App_UI_HudPanel__OnOpen (Dino_BusSand_App_UI_HudPanel_o* __this, Il2CppObject*
   param, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__OnOpen_23079b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar1 = PTR_DAT_04cac868;
                    /* try { // try from 024079c0 to 02507a2f has its CatchHandler @ 02408750 */
  if ((bRam0000000004f9c509 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac448);
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04cb7fe8);
    FUN_02132f7c(PTR_DAT_04cb7ff0);
    FUN_02132f7c(PTR_DAT_04cb7ff8);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02407a54 to 02507aab has its CatchHandler @ 0240873c */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb8000);
    FUN_02132f7c(PTR_DAT_04cad880);
    FUN_02132f7c(PTR_DAT_04cb1048);
    bRam0000000004f9c509 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
                    /* try { // try from 02407ad0 to 02507b27 has its CatchHandler @ 02408730 */
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar2 = PTR_DAT_04cad330;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_04cb8000;
  puVar1 = PTR_DAT_04cb1048;
  plVar10 = (long *)(param_1 + 0x40);
  *plVar10 = **(long **)(lVar4 + 0xb8);
  thunk_FUN_02134474(plVar10);
  *(undefined8 *)(param_1 + 0x110) = 0;
  thunk_FUN_02134474(param_1 + 0x110,0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  thunk_FUN_02134474(param_1 + 0x118,0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  thunk_FUN_02134474(param_1 + 0x120,0);
                    /* try { // try from 02407b4c to 02507ba3 has its CatchHandler @ 02408708 */
  *(undefined8 *)(param_1 + 0x138) = 0;
  thunk_FUN_02134474(param_1 + 0x138,0);
  uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar4);
  }
  uVar5 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar5,*(undefined8 *)puVar1,0);
  puVar11 = (undefined8 *)(param_1 + 0x58);
  *puVar11 = uVar5;
  thunk_FUN_02134474(puVar11,uVar5);
                    /* try { // try from 02407bb4 to 02507bbb has its CatchHandler @ 0240873c */
                    /* try { // try from 02407bcc to 02507bd3 has its CatchHandler @ 02408730 */
  Dino_BusSand_App_UI_UiKit__Node_22818c4
            (0x42b80000,0x42ee0000,0,0x41200000,*puVar11,*(undefined8 *)puVar3,0,0,0);
                    /* try { // try from 02407be4 to 02507beb has its CatchHandler @ 0240871c */
  uVar5 = Dino_BusSand_App_UI_HudPanel__BuildWorld_2307ef8(param_1);
                    /* try { // try from 02407bf8 to 02507c0f has its CatchHandler @ 02408718 */
  Dino_BusSand_App_UI_HudPanel__BuildTop_23082ec(param_1);
  Dino_BusSand_App_UI_HudPanel__BuildCounter_2308640(param_1);
  Dino_BusSand_App_UI_HudPanel__BuildBar_230892c(param_1);
                    /* try { // try from 02407c10 to 02507c1f has its CatchHandler @ 024086f0 */
  Dino_BusSand_App_UI_HudPanel__BuildRescueTimer_23090a0(param_1);
  if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0xb8),0);
                    /* try { // try from 02407c2c to 02507c97 has its CatchHandler @ 02408714 */
  if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar6,0);
  uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar6,*(undefined8 *)PTR_DAT_04cad880,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02407ca4 to 02507caf has its CatchHandler @ 024086ec */
  lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar8 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                             (lVar7,*(undefined8 *)PTR_DAT_04cacf98);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02407cd0 to 02507cd7 has its CatchHandler @ 02408540 */
  (**(code **)(*plVar8 + 0x2a8))(0,0,0,_UNK_00e20590,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
                    /* try { // try from 02407ce4 to 02507cef has its CatchHandler @ 0240850c */
  lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
                    /* try { // try from 02407d00 to 02507d0b has its CatchHandler @ 024084e0 */
  lVar4 = *plVar10;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02407d1c to 02507d27 has its CatchHandler @ 024084a0 */
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  puVar1 = PTR_DAT_04cac7e0;
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 02407d38 to 02507d3b has its CatchHandler @ 02408454 */
    lVar4 = *plVar10;
                    /* try { // try from 02407d3c to 02507d47 has its CatchHandler @ 024084b0 */
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
    System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)PTR_DAT_04cb7ff0,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02407d64 to 02507d73 has its CatchHandler @ 02408478 */
    Dino_BusSand_App_Gameplay_GameplayController__add_ItemConsumed_229c674(lVar4,uVar6,0);
    lVar4 = *plVar10;
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac448);
                    /* try { // try from 02407d88 to 02507d8b has its CatchHandler @ 02408424 */
                    /* try { // try from 02407d8c to 02507da3 has its CatchHandler @ 02408494 */
    System_Action_Int32Enum____ctor_35ef240(uVar6,param_1,*(undefined8 *)PTR_DAT_04cb7ff8,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02407db4 to 02507dbf has its CatchHandler @ 02408484 */
    Dino_BusSand_App_Gameplay_GameplayController__add_StateChanged_229c2a4(lVar4,uVar6,0);
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)PTR_DAT_04cb7fe8,0);
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02407df4 to 02507dfb has its CatchHandler @ 0240848c */
  Dino_BusSand_App_Meta_Profile__add_ItemChanged_226f620(uVar6,0);
  Dino_BusSand_App_UI_HudPanel__ApplyTier_23094e8(param_1);
  Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
                    /* try { // try from 02407e18 to 02507e73 has its CatchHandler @ 024084d4 */
  if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar5,0);
  return;
}

