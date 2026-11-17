/* IL2CPP: Dino.Tracking.TrackingEventIapBase<object>$$WriteSharedParameters
void Dino_Tracking_TrackingEventIapBase_object___WriteSharedParameters (Dino_Tracking_TrackingEventIapBase_TSelf__o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F9A300* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapBase<object>$$WriteSharedParameters
   void Dino_Tracking_TrackingEventIapBase_object___WriteSharedParameters
   (Dino_Tracking_TrackingEventIapBase_TSelf__o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F9A300*
   method); */

void Dino_Tracking_TrackingEventIapBase_object___WriteSharedParameters_2f9a300
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  puVar2 = PTR_DAT_04caa870;
  if ((bRam0000000004f9e73d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cc5fb8);
    FUN_02132f7c(PTR_DAT_04cc5fc0);
    FUN_02132f7c(PTR_DAT_04cb2678);
    FUN_02132f7c(PTR_DAT_04cb2690);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9e73d = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_a0,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x18),0);
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar5 = PTR_DAT_04cc5fc0;
    puVar4 = PTR_DAT_04cc5fb8;
    puVar3 = PTR_DAT_04cb2690;
    puVar2 = PTR_DAT_04cb2678;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x38) = uStack_88;
        *(undefined8 *)(lVar6 + 0x30) = uStack_90;
        *(undefined8 *)(lVar6 + 0x48) = uStack_78;
        *(undefined8 *)(lVar6 + 0x40) = uStack_80;
        *(undefined8 *)(lVar6 + 0x28) = uStack_98;
        *(undefined8 *)(lVar6 + 0x20) = uStack_a0;
        thunk_FUN_02134474(lVar6 + 0x20,0);
      }
      else {
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_70,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar4
                );
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
                (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar5
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

