/* IL2CPP: Dino.Tracking.TrackingEventEventBase<object>$$WriteSharedParameters
void Dino_Tracking_TrackingEventEventBase_object___WriteSharedParameters (Dino_Tracking_TrackingEventEventBase_TSelf__o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F99C30* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventEventBase<object>$$WriteSharedParameters
   void Dino_Tracking_TrackingEventEventBase_object___WriteSharedParameters
   (Dino_Tracking_TrackingEventEventBase_TSelf__o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F99C30*
   method); */

void Dino_Tracking_TrackingEventEventBase_object___WriteSharedParameters_2f99c30
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
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
  
  puVar2 = PTR_DAT_04cc5f60;
  if ((bRam0000000004f9e73b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cc5f68);
    FUN_02132f7c(PTR_DAT_04cc5f70);
    FUN_02132f7c(PTR_DAT_04cc5f78);
    FUN_02132f7c(PTR_DAT_04cc5f60);
    FUN_02132f7c(PTR_DAT_04cc5f80);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9e73b = 1;
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
    lVar7 = *(long *)(param_2 + 0x10);
    lVar8 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar6 = PTR_DAT_04cc5f80;
    puVar5 = PTR_DAT_04cc5f78;
    puVar4 = PTR_DAT_04cc5f70;
    puVar3 = PTR_DAT_04cc5f68;
    puVar2 = PTR_DAT_04caa870;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + 0x38) = uStack_88;
        *(undefined8 *)(lVar7 + 0x30) = uStack_90;
        *(undefined8 *)(lVar7 + 0x48) = uStack_78;
        *(undefined8 *)(lVar7 + 0x40) = uStack_80;
        *(undefined8 *)(lVar7 + 0x28) = uStack_98;
        *(undefined8 *)(lVar7 + 0x20) = uStack_a0;
        thunk_FUN_02134474(lVar7 + 0x20,0);
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
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
                (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar3
                );
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x28),0);
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x30),0);
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

