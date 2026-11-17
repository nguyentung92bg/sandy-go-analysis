/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$Detach
void Dino_BusSand_App_UI_YachtRacingHallButton__Detach (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$Detach
   void Dino_BusSand_App_UI_YachtRacingHallButton__Detach
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__Detach_21e8a04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000004f9bbe1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb0f38);
    FUN_02132f7c(PTR_DAT_04cb0f48);
    bRam0000000004f9bbe1 = 1;
  }
  puVar1 = PTR_DAT_04caa458;
  if ((*(char *)(param_1 + 0x8f) != '\0') && (*(long *)(param_1 + 0x28) != 0)) {
    plVar4 = (long *)(*(long *)(param_1 + 0x28) + 0x30);
    lVar5 = *plVar4;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar2,param_1,*(undefined8 *)PTR_DAT_04cb0f48,0);
    plVar3 = (long *)System_Delegate__Remove_4872510(lVar5,uVar2,0);
    if (plVar3 == (long *)0x0) {
      *plVar4 = 0;
    }
    else {
      lVar5 = *(long *)puVar1;
      if ((*plVar3 != lVar5) || (*plVar4 = (long)plVar3, *plVar3 != lVar5)) goto LAB_022e8b40;
    }
    thunk_FUN_02134474(plVar4,plVar3);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022e86b4 with catch @ 022e8b78 */
      FUN_02133224();
    }
                    /* try { // try from 022e8ae4 to 023e8af7 has its CatchHandler @ 022e8b60 */
    plVar4 = (long *)(*(long *)(param_1 + 0x28) + 0x38);
    lVar5 = *plVar4;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar2,param_1,*(undefined8 *)PTR_DAT_04cb0f38,0);
    plVar3 = (long *)System_Delegate__Remove_4872510(lVar5,uVar2,0);
    if (plVar3 == (long *)0x0) {
                    /* catch() { ... } // from try @ 022e8b20 with catch @ 022e8b48 */
      *plVar4 = 0;
    }
    else {
                    /* try { // try from 022e8b20 to 023e8b33 has its CatchHandler @ 022e8b48 */
      lVar5 = *(long *)puVar1;
                    /* try { // try from 022e8b34 to 023e8bdf has its CatchHandler @ 022e8608 */
      if ((*plVar3 != lVar5) || (*plVar4 = (long)plVar3, *plVar3 != lVar5)) {
LAB_022e8b40:
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar3);
      }
    }
    thunk_FUN_02134474(plVar4,plVar3);
  }
  *(undefined2 *)(param_1 + 0x8e) = 0;
                    /* catch() { ... } // from try @ 022e8ae4 with catch @ 022e8b60 */
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return;
}

