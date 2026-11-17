/* IL2CPP: Dino.Tracking.TrackingEventEventStart$$WriteEventParameters
void Dino_Tracking_TrackingEventEventStart__WriteEventParameters (Dino_Tracking_TrackingEventEventStart_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventEventStart$$WriteEventParameters
   void Dino_Tracking_TrackingEventEventStart__WriteEventParameters
   (Dino_Tracking_TrackingEventEventStart_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventEventStart__WriteEventParameters_247999c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
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
  
  puVar3 = PTR_DAT_04cc1a68;
  puVar2 = PTR_DAT_04cc1a20;
                    /* try { // try from 025799ac to 026799bb has its CatchHandler @ 025799bc */
                    /* catch() { ... } // from try @ 0257987c with catch @ 025799bc
                       catch() { ... } // from try @ 025799ac with catch @ 025799bc */
                    /* try { // try from 025799c0 to 026799c3 has its CatchHandler @ 025799cc */
                    /* try { // try from 025799c4 to 026799cf has its CatchHandler @ 02579630 */
  if ((bRam0000000004f9cf0c & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025799c0 with catch @ 025799cc
                        */
                    /* try { // try from 025799d0 to 02679b1b has its CatchHandler @ 025799d0
                       catch() { ... } // from try @ 025799d0 with catch @ 025799d0
                       catch() { ... } // from try @ 02579b38 with catch @ 025799d0
                       catch() { ... } // from try @ 02579e1c with catch @ 025799d0
                       catch() { ... } // from try @ 0257a01c with catch @ 025799d0
                       catch() { ... } // from try @ 0257a0c4 with catch @ 025799d0
                       catch() { ... } // from try @ 0257a114 with catch @ 025799d0
                       catch() { ... } // from try @ 0257a18c with catch @ 025799d0
                       catch() { ... } // from try @ 0257a1e0 with catch @ 025799d0
                       catch() { ... } // from try @ 0257a25c with catch @ 025799d0
                       catch() { ... } // from try @ 0257a2b4 with catch @ 025799d0
                       catch() { ... } // from try @ 0257a310 with catch @ 025799d0
                       catch() { ... } // from try @ 0257a350 with catch @ 025799d0 */
    FUN_02132f7c(PTR_DAT_04cc1a68);
    FUN_02132f7c(PTR_DAT_04cc1a20);
    bRam0000000004f9cf0c = 1;
  }
  Dino_Tracking_TrackingEventEventBase_object___WriteSharedParameters_2f99c30
            (param_1,param_2,*(undefined8 *)puVar3);
  uVar6 = *(ulong *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9cd2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440,uVar5,uVar6,0);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    FUN_02132f7c(PTR_DAT_04cb2c60);
    bRam0000000004f9cd2a = 1;
  }
  if ((uVar6 & 0xff) == 0) {
    return;
  }
  iVar4 = System_Nullable_int___get_Value_2bcbbe8
                    (&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb2c60);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_90,uVar5,(long)iVar4);
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x10);
    lVar8 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + 0x38) = uStack_78;
        *(undefined8 *)(lVar7 + 0x30) = uStack_80;
        *(undefined8 *)(lVar7 + 0x48) = uStack_68;
        *(undefined8 *)(lVar7 + 0x40) = uStack_70;
        *(undefined8 *)(lVar7 + 0x28) = uStack_88;
        *(undefined8 *)(lVar7 + 0x20) = uStack_90;
        thunk_FUN_02134474(lVar7 + 0x20,0);
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
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

