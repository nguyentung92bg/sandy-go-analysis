/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$Start
bool Dino_BusSand_App_UI_ActivityQuitFlow__Start (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$Start
   bool Dino_BusSand_App_UI_ActivityQuitFlow__Start (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this,
   const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_ActivityQuitFlow__Start_2187e70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 02287e3c with catch @ 02287e78 */
  if ((bRam0000000004f9b966 & 1) == 0) {
                    /* try { // try from 02287e94 to 02387f8f has its CatchHandler @ 02287e94
                       catch() { ... } // from try @ 02287e94 with catch @ 02287e94
                       catch() { ... } // from try @ 02287f9c with catch @ 02287e94 */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cada78);
    FUN_02132f7c(PTR_DAT_04cada80);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cada90);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b966 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if (((((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x18) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x18) + 0x18) != 0)) &&
     (uVar3 = Dino_BusSand_App_UI_ActivityQuitFlow__ShowNext_2188014(param_1),
     puVar1 = PTR_DAT_04caa458, (uVar3 & 1) != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar4,param_1,*(undefined8 *)PTR_DAT_04cada78,0);
    puVar2 = PTR_DAT_04cad948;
    if (lVar5 != 0) {
                    /* try { // try from 02287f90 to 02387f9b has its CatchHandler @ 02287fcc */
                    /* try { // try from 02287f9c to 02387fe7 has its CatchHandler @ 02287e94 */
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (lVar5,*(undefined8 *)PTR_DAT_04cada90,uVar4,1,*(undefined8 *)PTR_DAT_04cad948,0);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar4,param_1,*(undefined8 *)PTR_DAT_04cada80,0);
      if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 02287f90 with catch @ 02287fcc */
                    /* try { // try from 02287fe8 to 0238805b has its CatchHandler @ 02287fe8
                       catch() { ... } // from try @ 02287fe8 with catch @ 02287fe8
                       catch() { ... } // from try @ 02288070 with catch @ 02287fe8 */
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (lVar5,*(undefined8 *)PTR_DAT_04cad460,uVar4,1,*(undefined8 *)puVar2,0);
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

