/* IL2CPP: Dino.Tracking.TrackingService$$Enqueue
void Dino_Tracking_TrackingService__Enqueue (Dino_Tracking_TrackingService_o* __this, System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$Enqueue
   void Dino_Tracking_TrackingService__Enqueue (Dino_Tracking_TrackingService_o* __this,
   System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const
   MethodInfo* method); */

void Dino_Tracking_TrackingService__Enqueue_247fb0c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9cf98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaba0);
    FUN_02132f7c(PTR_DAT_04cc2218);
    FUN_02132f7c(PTR_DAT_04cc2220);
    FUN_02132f7c(PTR_DAT_04cc2228);
    FUN_02132f7c(PTR_DAT_04cc2230);
    FUN_02132f7c(PTR_DAT_04cc0168);
    bRam0000000004f9cf98 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    if (0x3f < *(int *)(lVar2 + 0x20)) {
      System_Collections_Generic_Queue_TrackingService_PendingEvent___Dequeue_2ce72c0
                (lVar2,*(undefined8 *)PTR_DAT_04cc2218);
      uStack_40 = CONCAT44(uStack_40._4_4_,0x40);
      uVar1 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_40);
      uVar1 = System_String__Format_46c8eb8(*(undefined8 *)PTR_DAT_04cc2230,uVar1,0);
      if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caaba0);
      }
      Dino_Debugger__LogWarning_2481e30(uVar1,*(undefined8 *)PTR_DAT_04cc0168,0);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    uStack_38 = 0;
    uStack_40 = param_2;
    thunk_FUN_02134474(&uStack_40,param_2);
    uStack_38 = param_3;
    thunk_FUN_02134474(&uStack_38,param_3);
    if (lVar2 != 0) {
      System_Collections_Generic_Queue_TrackingService_PendingEvent___Enqueue_2ce715c
                (lVar2,uStack_40,uStack_38,*(undefined8 *)PTR_DAT_04cc2220);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

