/* IL2CPP: Dino.Tracking.TrackingEventLevelSessionEndBase<object>$$WriteSessionEndParameters
void Dino_Tracking_TrackingEventLevelSessionEndBase_object___WriteSessionEndParameters (Dino_Tracking_TrackingEventLevelSessionEndBase_TSelf__o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F9AC20* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLevelSessionEndBase<object>$$WriteSessionEndParameters
   void Dino_Tracking_TrackingEventLevelSessionEndBase_object___WriteSessionEndParameters
   (Dino_Tracking_TrackingEventLevelSessionEndBase_TSelf__o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F9AC20*
   method); */

void Dino_Tracking_TrackingEventLevelSessionEndBase_object___WriteSessionEndParameters_2f9ac20
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9e740 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3e88);
    FUN_02132f7c(PTR_DAT_04caa7b0);
    FUN_02132f7c(PTR_DAT_04cb3e90);
    FUN_02132f7c(PTR_DAT_04cb4a40);
    FUN_02132f7c(PTR_DAT_04cb4ae8);
    FUN_02132f7c(PTR_DAT_04cb4af8);
    FUN_02132f7c(PTR_DAT_04cb2470);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cb2480);
    FUN_02132f7c(PTR_DAT_04cb2488);
    bRam0000000004f9e740 = 1;
  }
  puVar7 = PTR_DAT_04cb4af8;
  puVar6 = PTR_DAT_04cb4ae8;
  puVar5 = PTR_DAT_04cb4a40;
  puVar4 = PTR_DAT_04cb2488;
  puVar3 = PTR_DAT_04cb2480;
  puVar2 = PTR_DAT_04cb2470;
  puVar1 = PTR_DAT_04cabc80;
  if (param_1 != 0) {
    Dino_Tracking_TrackingEventLevelBase_object___WriteSharedParameters_2f9a744(param_1,param_2);
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
              (param_2,*(undefined8 *)puVar7,*(undefined8 *)(param_1 + 0x50),0);
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
              (param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x58),0);
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
              (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x60),0);
    if (*(char *)(param_1 + 0x68) == '\0') {
      uVar10 = *(undefined8 *)puVar1;
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar10 = *(undefined8 *)puVar1;
      uStack_60 = 0;
      uStack_58 = 0;
      System_Nullable_double____ctor_2bcaca0
                ((double)*(float *)(param_1 + 0x6c),&uStack_60,*(undefined8 *)PTR_DAT_04caa7b0);
      uVar8 = uStack_60;
      uVar9 = uStack_58;
    }
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447c48(param_2,uVar10,uVar8,uVar9,0)
    ;
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
              (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x70),0);
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
              (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x78),0);
    Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
              (param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x80),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

