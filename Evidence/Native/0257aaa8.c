/* IL2CPP: Dino.Tracking.TrackingEventResourceSpend$$WriteEventParameters
void Dino_Tracking_TrackingEventResourceSpend__WriteEventParameters (Dino_Tracking_TrackingEventResourceSpend_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventResourceSpend$$WriteEventParameters
   void Dino_Tracking_TrackingEventResourceSpend__WriteEventParameters
   (Dino_Tracking_TrackingEventResourceSpend_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventResourceSpend__WriteEventParameters_247aaa8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_04cc1b78;
  puVar4 = PTR_DAT_04cc1b70;
  puVar3 = PTR_DAT_04cad0e0;
  puVar2 = PTR_DAT_04cacc18;
                    /* try { // try from 0257aac0 to 0267aac3 has its CatchHandler @ 0257aacc */
                    /* catch() { ... } // from try @ 0257aac0 with catch @ 0257aacc */
                    /* try { // try from 0257aad4 to 0267aadb has its CatchHandler @ 0257b394 */
                    /* try { // try from 0257aadc to 0267aaf3 has its CatchHandler @ 0257a450 */
  if ((bRam0000000004f9cf2c & 1) == 0) {
                    /* try { // try from 0257aaf4 to 0267aaf7 has its CatchHandler @ 0257b020 */
    FUN_02132f7c(PTR_DAT_04cb3e88);
    FUN_02132f7c(PTR_DAT_04caa7b0);
    FUN_02132f7c(PTR_DAT_04cb3e90);
    FUN_02132f7c(PTR_DAT_04cc1b70);
    FUN_02132f7c(PTR_DAT_04cc1b78);
    FUN_02132f7c(PTR_DAT_04cad0e0);
                    /* try { // try from 0257ab3c to 0267ab63 has its CatchHandler @ 0257b398 */
    FUN_02132f7c(PTR_DAT_04cacc18);
    FUN_02132f7c(PTR_DAT_04cabc80);
    bRam0000000004f9cf2c = 1;
  }
  puVar1 = PTR_DAT_04cabc80;
                    /* try { // try from 0257ab64 to 0267ac1f has its CatchHandler @ 0257a450 */
  Dino_Tracking_TrackingEventResourceBase_object___WriteSharedParameters_2f9b618
            (param_1,param_2,*(undefined8 *)puVar4);
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
            (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)puVar5);
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
            (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x58),0);
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar8 = *(undefined8 *)puVar1;
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = *(undefined8 *)puVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    System_Nullable_double____ctor_2bcaca0
              ((double)*(float *)(param_1 + 100),&uStack_50,*(undefined8 *)PTR_DAT_04caa7b0);
    uVar6 = uStack_50;
    uVar7 = uStack_48;
  }
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447c48(param_2,uVar8,uVar6,uVar7,0);
  return;
}

