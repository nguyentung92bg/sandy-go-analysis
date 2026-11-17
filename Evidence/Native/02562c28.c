/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$FireSampleEvents
void Dino_Tracking_ServerTrackingProvider__FireSampleEvents (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$FireSampleEvents
   void Dino_Tracking_ServerTrackingProvider__FireSampleEvents
   (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingProvider__FireSampleEvents_2462c28(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cc0a98;
  puVar3 = PTR_DAT_04cc0a30;
  puVar1 = PTR_DAT_04cab960;
  if ((bRam0000000004f9ce3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a30);
    FUN_02132f7c(PTR_DAT_04cc0aa0);
    FUN_02132f7c(PTR_DAT_04cc0a98);
    FUN_02132f7c(PTR_DAT_04cc0aa8);
    FUN_02132f7c(PTR_DAT_04cab960);
    FUN_02132f7c(PTR_DAT_04caccf0);
    bRam0000000004f9ce3a = 1;
  }
  lVar4 = FUN_02133068(*(undefined8 *)puVar3,1);
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_60,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
  puVar3 = PTR_DAT_04cc0aa8;
  puVar1 = PTR_DAT_04cc0aa0;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_58;
      *(undefined8 *)(lVar4 + 0x20) = uStack_60;
      puVar2 = PTR_DAT_04caccf0;
      *(undefined8 *)(lVar4 + 0x38) = uStack_48;
      *(undefined8 *)(lVar4 + 0x30) = uStack_50;
      *(undefined8 *)(lVar4 + 0x48) = uStack_38;
      *(undefined8 *)(lVar4 + 0x40) = uStack_40;
      thunk_FUN_02134474(lVar4 + 0x20,0);
      Dino_Tracking_ServerTrackingProvider__TrackEvent_2462f54(param_1,*(undefined8 *)puVar1,lVar4);
      Dino_Tracking_ServerTrackingProvider__SetUserProperty_2462fa8
                (param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
      Dino_Tracking_ServerTrackingProvider__FlushNow_2462ae0(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

