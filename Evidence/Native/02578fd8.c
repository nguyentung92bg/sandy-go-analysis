/* IL2CPP: Dino.Tracking.TrackingEventIapShow$$WriteEventParameters
void Dino_Tracking_TrackingEventIapShow__WriteEventParameters (Dino_Tracking_TrackingEventIapShow_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapShow$$WriteEventParameters
   void Dino_Tracking_TrackingEventIapShow__WriteEventParameters
   (Dino_Tracking_TrackingEventIapShow_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventIapShow__WriteEventParameters_2478fd8(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_04cc19a0;
  puVar2 = PTR_DAT_04cb2680;
  if ((bRam0000000004f9cef9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc19a0);
    FUN_02132f7c(PTR_DAT_04cb2680);
    bRam0000000004f9cef9 = 1;
  }
  Dino_Tracking_TrackingEventIapBase_object___WriteSharedParameters_2f9a300
            (param_1,param_2,*(undefined8 *)puVar3);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9cd2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440,uVar4,lVar5,0);
    bRam0000000004f9cd2d = 1;
  }
  if (lVar5 == 0) {
    return;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518(&uStack_90,uVar4,lVar5);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    lVar6 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x38) = uStack_78;
        *(undefined8 *)(lVar5 + 0x30) = uStack_80;
        *(undefined8 *)(lVar5 + 0x48) = uStack_68;
        *(undefined8 *)(lVar5 + 0x40) = uStack_70;
        *(undefined8 *)(lVar5 + 0x28) = uStack_88;
        *(undefined8 *)(lVar5 + 0x20) = uStack_90;
        thunk_FUN_02134474(lVar5 + 0x20,0);
        return;
      }
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
      uStack_38 = uStack_68;
      uStack_40 = uStack_70;
      System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                (param_2,&uStack_60,
                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

