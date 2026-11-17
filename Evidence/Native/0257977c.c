/* IL2CPP: Dino.Tracking.TrackingEventEventEnd$$WriteEventParameters
void Dino_Tracking_TrackingEventEventEnd__WriteEventParameters (Dino_Tracking_TrackingEventEventEnd_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventEventEnd$$WriteEventParameters
   void Dino_Tracking_TrackingEventEventEnd__WriteEventParameters
   (Dino_Tracking_TrackingEventEventEnd_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventEventEnd__WriteEventParameters_247977c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = PTR_DAT_04cc1a50;
  puVar8 = PTR_DAT_04cc1a48;
  puVar7 = PTR_DAT_04cc1a40;
  puVar6 = PTR_DAT_04cc1a38;
  puVar5 = PTR_DAT_04cc1a30;
  puVar4 = PTR_DAT_04cc1a28;
  puVar3 = PTR_DAT_04cc1a20;
  puVar2 = PTR_DAT_04cc1a18;
                    /* try { // try from 02579790 to 026797af has its CatchHandler @ 02579860 */
                    /* try { // try from 025797b0 to 026797b7 has its CatchHandler @ 02579858 */
                    /* try { // try from 025797c0 to 026797df has its CatchHandler @ 02579864 */
                    /* try { // try from 025797e0 to 02679853 has its CatchHandler @ 02579630 */
  if ((bRam0000000004f9cf09 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1a18);
    FUN_02132f7c(PTR_DAT_04cc1a30);
    FUN_02132f7c(PTR_DAT_04cc1a40);
    FUN_02132f7c(PTR_DAT_04cc1a38);
    FUN_02132f7c(PTR_DAT_04cc1a48);
    FUN_02132f7c(PTR_DAT_04cc1a28);
    FUN_02132f7c(PTR_DAT_04cc1a20);
    FUN_02132f7c(PTR_DAT_04cc1a50);
    bRam0000000004f9cf09 = 1;
  }
                    /* try { // try from 02579854 to 02679857 has its CatchHandler @ 0257985c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025797b0 with catch @ 02579858
                       try { // try from 02579858 to 0267987b has its CatchHandler @ 02579630 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02579854 with catch @ 0257985c
                        */
  Dino_Tracking_TrackingEventEventBase_object___WriteSharedParameters_2f99c30
            (param_1,param_2,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02579790 with catch @ 02579860
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025797c0 with catch @ 02579864
                        */
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
            (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x40),0);
                    /* try { // try from 0257987c to 02679893 has its CatchHandler @ 025799bc */
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
            (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar5);
                    /* try { // try from 02579894 to 026799ab has its CatchHandler @ 02579630 */
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
            (param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)puVar7);
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
            (param_2,*(undefined8 *)puVar8,*(undefined8 *)(param_1 + 0x58),0);
  uVar12 = *(ulong *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)puVar9;
  if ((bRam0000000004f9cd2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440,uVar11,uVar12,0);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    FUN_02132f7c(PTR_DAT_04cb2c60);
    bRam0000000004f9cd2a = 1;
  }
  if ((uVar12 & 0xff) == 0) {
    return;
  }
  iVar10 = System_Nullable_int___get_Value_2bcbbe8
                     (&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb2c60);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_90,uVar11,(long)iVar10);
  if (param_2 != 0) {
    lVar13 = *(long *)(param_2 + 0x10);
    lVar14 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + 0x38) = uStack_78;
        *(undefined8 *)(lVar13 + 0x30) = uStack_80;
        *(undefined8 *)(lVar13 + 0x48) = uStack_68;
        *(undefined8 *)(lVar13 + 0x40) = uStack_70;
        *(undefined8 *)(lVar13 + 0x28) = uStack_88;
        *(undefined8 *)(lVar13 + 0x20) = uStack_90;
        thunk_FUN_02134474(lVar13 + 0x20,0);
        return;
      }
      System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                (param_2,&stack0xffffffffffffffa0,
                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

