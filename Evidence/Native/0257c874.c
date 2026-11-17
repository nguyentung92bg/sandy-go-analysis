/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapClick
void Dino_Tracking_DinoEventTracking__TrackIapClick (System_String_o* placement, System_String_o* packName, Dino_Tracking_IapClickOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapClick
   void Dino_Tracking_DinoEventTracking__TrackIapClick (System_String_o* placement, System_String_o*
   packName, Dino_Tracking_IapClickOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackIapClick_247c874
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1ce8);
    FUN_02132f7c(PTR_DAT_04cc1cf0);
    FUN_02132f7c(PTR_DAT_04cc1cf8);
    FUN_02132f7c(PTR_DAT_04cc1d00);
    bRam0000000004f9cf4d = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1d00);
  Dino_Tracking_TrackingEventIapClick___ctor_2478638(lVar3,param_1,param_2);
                    /* try { // try from 0257c940 to 0267c947 has its CatchHandler @ 0257ca90 */
  if ((((lVar3 == 0) ||
       (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetShowType_2f9a248
                          (lVar3,*param_3,*(undefined8 *)PTR_DAT_04cc1cf0), lVar3 == 0)) ||
      (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetTriggerType_2f9a2a4
                         (lVar3,param_3[1],*(undefined8 *)PTR_DAT_04cc1cf8), lVar3 == 0)) ||
     (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4), plVar1 = plStack_38
     , plStack_38 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 0257c95c to 0267c95f has its CatchHandler @ 0257ca7c */
  lVar4 = *plStack_38;
                    /* try { // try from 0257c960 to 0267c96f has its CatchHandler @ 0257ca8c */
  lVar6 = *(long *)PTR_DAT_04cc1ce8;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
                    /* try { // try from 0257c978 to 0267c983 has its CatchHandler @ 0257ca80 */
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 0257c984 to 0267c98f has its CatchHandler @ 0257ca84 */
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257c9b0;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 0257c990 to 0267ca73 has its CatchHandler @ 0257c850 */
    } while (uVar2 != 0);
  }
  lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257c9b0:
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

