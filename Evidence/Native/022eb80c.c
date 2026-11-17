/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$AddListeners
void Dino_BusSand_App_UI_YachtRacingPanel__AddListeners (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$AddListeners
   void Dino_BusSand_App_UI_YachtRacingPanel__AddListeners (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__AddListeners_21eb80c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  puVar7 = PTR_DAT_04cb10a8;
  puVar6 = PTR_DAT_04cb10a0;
  puVar5 = PTR_DAT_04cadd80;
  puVar4 = PTR_DAT_04cad948;
  puVar3 = PTR_DAT_04cad460;
  puVar2 = PTR_DAT_04caa458;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022eb82c to 023eb833 has its CatchHandler @ 022eb890 */
                    /* try { // try from 022eb834 to 023eb8bf has its CatchHandler @ 022eb794 */
  if ((bRam0000000004f9bbf3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb10b0);
                    /* catch() { ... } // from try @ 022eb82c with catch @ 022eb890 */
    FUN_02132f7c(PTR_DAT_04cb10b8);
    FUN_02132f7c(PTR_DAT_04cb10a8);
    FUN_02132f7c(PTR_DAT_04cb10c0);
    FUN_02132f7c(PTR_DAT_04cb10a0);
                    /* try { // try from 022eb8c0 to 023eb957 has its CatchHandler @ 022eb8c0
                       catch() { ... } // from try @ 022eb8c0 with catch @ 022eb8c0
                       catch() { ... } // from try @ 022eb960 with catch @ 022eb8c0 */
    FUN_02132f7c(PTR_DAT_04cadd80);
    FUN_02132f7c(PTR_DAT_04cb10c8);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bbf3 = 1;
  }
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar6,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar5,uVar8,1,*(undefined8 *)puVar4,0);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar7,0);
                    /* try { // try from 022eb958 to 023eb95f has its CatchHandler @ 022eb9bc */
                    /* try { // try from 022eb960 to 023eb9eb has its CatchHandler @ 022eb8c0 */
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar3,uVar8,1,*(undefined8 *)puVar4,0);
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_022ebb18;
    uVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0);
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 022eb958 with catch @ 022eb9bc */
    System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)PTR_DAT_04cb10c0,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar10,1,*(undefined8 *)puVar4,0);
  }
                    /* try { // try from 022eb9ec to 023eba83 has its CatchHandler @ 022eb9ec
                       catch() { ... } // from try @ 022eb9ec with catch @ 022eb9ec
                       catch() { ... } // from try @ 022eba8c with catch @ 022eb9ec */
  lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb10c8,0);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if (lVar11 == 0) goto LAB_022ebb18;
    uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)PTR_DAT_04cb10b8,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar10,0,0,0);
  }
  puVar1 = PTR_DAT_04cb10b0;
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 022eba84 to 023eba8b has its CatchHandler @ 022ebae8 */
                    /* try { // try from 022eba8c to 023ebb17 has its CatchHandler @ 022eb9ec */
    plVar14 = (long *)(*(long *)(param_1 + 0x40) + 0x38);
    lVar11 = *plVar14;
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar1,0);
    plVar12 = (long *)System_Delegate__Combine_4872324(lVar11,uVar8,0);
    if (plVar12 == (long *)0x0) {
                    /* catch() { ... } // from try @ 022eba84 with catch @ 022ebae8 */
      *plVar14 = 0;
    }
    else {
      lVar11 = *(long *)puVar2;
      if ((*plVar12 != lVar11) || (*plVar14 = (long)plVar12, *plVar12 != lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar12);
      }
    }
    thunk_FUN_02134474(plVar14,plVar12);
    *(undefined1 *)(param_1 + 0x94) = 1;
    return;
  }
LAB_022ebb18:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022ebb18 to 023ebbaf has its CatchHandler @ 022ebb18
                       catch() { ... } // from try @ 022ebb18 with catch @ 022ebb18
                       catch() { ... } // from try @ 022ebbb8 with catch @ 022ebb18 */
  FUN_02133224();
}

