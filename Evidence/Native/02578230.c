/* IL2CPP: Dino.Tracking.TrackingEventAdRequest$$WriteEventParameters
void Dino_Tracking_TrackingEventAdRequest__WriteEventParameters (Dino_Tracking_TrackingEventAdRequest_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdRequest$$WriteEventParameters
   void Dino_Tracking_TrackingEventAdRequest__WriteEventParameters
   (Dino_Tracking_TrackingEventAdRequest_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventAdRequest__WriteEventParameters_2478230(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
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
  
  puVar2 = PTR_DAT_04cc1948;
  if ((bRam0000000004f9ceea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04ca9e68);
    FUN_02132f7c(PTR_DAT_04caa3c0);
    FUN_02132f7c(PTR_DAT_04cc1948);
    FUN_02132f7c(PTR_DAT_04cc1950);
    FUN_02132f7c(PTR_DAT_04cb26d0);
    FUN_02132f7c(PTR_DAT_04cb4b38);
    FUN_02132f7c(PTR_DAT_04cb4b40);
    FUN_02132f7c(PTR_DAT_04cb4b50);
    bRam0000000004f9ceea = 1;
  }
  Dino_Tracking_TrackingEventAdBase_object___WriteSharedParameters_2f99844
            (param_1,param_2,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_04cb4b38;
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar4 = System_Nullable_bool___get_Value_2bc8084
                      ((char *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04caa3c0);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_90,*(undefined8 *)puVar2,uVar4 & 1,0);
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
        }
        else {
          uStack_58 = uStack_88;
          uStack_60 = uStack_90;
          uStack_48 = uStack_78;
          uStack_50 = uStack_80;
          uStack_38 = uStack_68;
          uStack_40 = uStack_70;
          System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                    (param_2,&uStack_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_025783b8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_025783b8:
  puVar3 = PTR_DAT_04cb4b50;
  puVar2 = PTR_DAT_04cb26d0;
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
            (param_2,*(undefined8 *)PTR_DAT_04cb4b40,*(undefined8 *)(param_1 + 0x44),
             *(undefined8 *)PTR_DAT_04cc1950);
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
            (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x50),0);
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
            (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x58),0);
  return;
}

