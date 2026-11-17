/* IL2CPP: Dino.Tracking.TrackingSinkRouter$$AddSink
void Dino_Tracking_TrackingSinkRouter__AddSink (Dino_Common_Tracking_ITrackingProvider_o* sink, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingSinkRouter$$AddSink
   void Dino_Tracking_TrackingSinkRouter__AddSink (Dino_Common_Tracking_ITrackingProvider_o* sink,
   const MethodInfo* method); */

void Dino_Tracking_TrackingSinkRouter__AddSink_2480a3c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  if ((bRam0000000004f9cf9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2278);
    FUN_02132f7c(PTR_DAT_04cc2280);
    FUN_02132f7c(PTR_DAT_04cc2288);
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    bRam0000000004f9cf9f = 1;
  }
  puVar3 = PTR_DAT_04cc2288;
  puVar2 = PTR_DAT_04cbf3d8;
  if (param_1 != 0) {
    iVar8 = 0;
    do {
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar6 == 0) {
LAB_02580bac:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar6 + 0x18) <= iVar8) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_02580bac;
        }
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar7 = *(long *)PTR_DAT_04cc2278;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = param_1;
          }
          else {
            uVar1 = *(uint *)(lVar6 + 0x18);
            System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                      (lVar6,uVar1 + 1,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                      0x70) + 0x20) + 0xc0) + 0x78));
            lVar4 = *(long *)(lVar6 + 0x10);
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = param_1;
          }
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                         ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
        goto LAB_02580bac;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_02580bac;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar6,iVar8,*(undefined8 *)puVar3);
      iVar8 = iVar8 + 1;
    } while (lVar4 != param_1);
  }
  return;
}

