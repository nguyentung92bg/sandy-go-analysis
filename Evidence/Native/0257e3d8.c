/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackTutorialAction
void Dino_Tracking_DinoEventTracking__TrackTutorialAction (System_String_o* actionCate, System_String_o* actionName, Dino_Tracking_TutorialActionOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackTutorialAction
   void Dino_Tracking_DinoEventTracking__TrackTutorialAction (System_String_o* actionCate,
   System_String_o* actionName, Dino_Tracking_TutorialActionOptions_o* options,
   Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackTutorialAction_247e3d8
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1fc8);
    FUN_02132f7c(PTR_DAT_04cc1fd0);
    bRam0000000004f9cf5d = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0257e4f8 to 0267e4fb has its CatchHandler @ 0257ee00 */
                    /* try { // try from 0257e4fc to 0267e51f has its CatchHandler @ 0257ee2c */
    return;
  }
                    /* try { // try from 0257e440 to 0267e447 has its CatchHandler @ 0257ea90 */
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1fd0);
                    /* try { // try from 0257e448 to 0267e4d7 has its CatchHandler @ 0257e160 */
  Dino_Tracking_TrackingEventTutorialAction___ctor_247a8c8(lVar3,param_1,param_2);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x28) = *param_3;
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar4 = *plStack_38;
      lVar6 = *(long *)PTR_DAT_04cc1fc8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257e4d0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257e4d0:
                    /* try { // try from 0257e4d8 to 0267e4df has its CatchHandler @ 0257ee1c */
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

