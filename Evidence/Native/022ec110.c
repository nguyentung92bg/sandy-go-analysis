/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClose
void Dino_BusSand_App_UI_YachtRacingPanel__OnClose (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClose
   void Dino_BusSand_App_UI_YachtRacingPanel__OnClose (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__OnClose_21ec110(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000004f9bbf4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb10b0);
    bRam0000000004f9bbf4 = 1;
  }
  puVar1 = PTR_DAT_04caa458;
  if ((*(char *)(param_1 + 0x94) != '\0') && (*(long *)(param_1 + 0x40) != 0)) {
    plVar4 = (long *)(*(long *)(param_1 + 0x40) + 0x38);
    lVar5 = *plVar4;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar2,param_1,*(undefined8 *)PTR_DAT_04cb10b0,0);
                    /* try { // try from 022ec18c to 023ec193 has its CatchHandler @ 022ec1f0 */
                    /* try { // try from 022ec194 to 023ec21f has its CatchHandler @ 022ec0f4 */
    plVar3 = (long *)System_Delegate__Remove_4872510(lVar5,uVar2,0);
    if (plVar3 == (long *)0x0) {
      *plVar4 = 0;
    }
    else {
      lVar5 = *(long *)puVar1;
      if ((*plVar3 != lVar5) || (*plVar4 = (long)plVar3, *plVar3 != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar3);
      }
    }
    thunk_FUN_02134474(plVar4,plVar3);
  }
  *(undefined2 *)(param_1 + 0x93) = 0;
  if (*(char *)(param_1 + 0x92) == '\0') {
    *(undefined1 *)(param_1 + 0x92) = 1;
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar3 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar5 = *plVar3;
      *plVar3 = 0;
      thunk_FUN_02134474(plVar3,0);
      if (lVar5 != 0) {
                    /* try { // try from 022ec220 to 023ec2b7 has its CatchHandler @ 022ec220
                       catch() { ... } // from try @ 022ec220 with catch @ 022ec220
                       catch() { ... } // from try @ 022ec2c0 with catch @ 022ec220 */
                    /* WARNING: Could not recover jumptable at 0x022ec234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
    }
  }
                    /* catch() { ... } // from try @ 022ec18c with catch @ 022ec1f0 */
  return;
}

