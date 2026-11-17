/* IL2CPP: Dino.BusSand.App.DeviceMemory$$Read
Dino_BusSand_App_DeviceMemory_Snapshot_o Dino_BusSand_App_DeviceMemory__Read (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0224fe04) */
/* WARNING: Removing unreachable block (ram,0x022500f8) */
/* WARNING: Removing unreachable block (ram,0x0224fe88) */
/* IL2CPP: Dino.BusSand.App.DeviceMemory$$Read
   Dino_BusSand_App_DeviceMemory_Snapshot_o Dino_BusSand_App_DeviceMemory__Read (const MethodInfo*
   method); */

void Dino_BusSand_App_DeviceMemory__Read_214fafc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cab3b0;
  if ((bRam0000000004f9b7ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9de8);
    FUN_02132f7c(PTR_DAT_04caa250);
    FUN_02132f7c(PTR_DAT_04ca9df8);
    FUN_02132f7c(PTR_DAT_04cab3b8);
    FUN_02132f7c(PTR_DAT_04cab3c0);
    FUN_02132f7c(PTR_DAT_04ca9d80);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab3b0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
                    /* try { // try from 0224fb90 to 0234fb97 has its CatchHandler @ 0224ffe4 */
    FUN_02132f7c(PTR_DAT_04cab3c8);
    FUN_02132f7c(PTR_DAT_04cab3d0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cab3d8);
    FUN_02132f7c(PTR_DAT_04cab3e0);
    FUN_02132f7c(PTR_DAT_04cab3e8);
    FUN_02132f7c(PTR_DAT_04caa268);
                    /* try { // try from 0224fbe8 to 0234fbef has its CatchHandler @ 0224ffac */
    FUN_02132f7c(PTR_DAT_04cab3f0);
    FUN_02132f7c(PTR_DAT_04cab3f8);
    FUN_02132f7c(PTR_DAT_04cab400);
    FUN_02132f7c(PTR_DAT_04cab408);
    FUN_02132f7c(PTR_DAT_04cab410);
    FUN_02132f7c(PTR_DAT_04caa2a0);
    bRam0000000004f9b7ba = 1;
  }
                    /* try { // try from 0224fc34 to 0234fca7 has its CatchHandler @ 0224ffa8 */
  plStack_40 = (long *)0x0;
  lStack_38 = 0;
  uStack_48 = 0;
  pcVar4 = *(char **)(*(long *)puVar1 + 0xb8);
  if (*pcVar4 == '\0') {
    if (pcVar4[0x38] == '\0') {
      lVar13 = *(long *)(pcVar4 + 0x28);
      if (lVar13 != 0) {
LAB_0224ff38:
        plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        if (plVar5 != (long *)0x0) {
          lVar14 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
                    /* try { // try from 0224ff60 to 0234ff67 has its CatchHandler @ 0224ffec */
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
                    /* try { // try from 022500e0 to 02350103 has its CatchHandler @ 022500ac */
            uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar7,0);
          }
                    /* try { // try from 0224ff7c to 0234ff87 has its CatchHandler @ 0224ff98 */
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar5[4] = lVar14;
                    /* catch() { ... } // from try @ 0224f96c with catch @ 0224ff88
                       try { // try from 0224ff88 to 02350023 has its CatchHandler @ 0224f750 */
                    /* catch() { ... } // from try @ 0224f940 with catch @ 0224ff8c */
          thunk_FUN_02134474(plVar5 + 4,lVar14);
                    /* catch() { ... } // from try @ 0224f8bc with catch @ 0224ff90 */
          if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 0224f7ac with catch @ 0224ff94 */
                    /* catch() { ... } // from try @ 0224ff7c with catch @ 0224ff98 */
                    /* catch() { ... } // from try @ 0224f914 with catch @ 0224ff9c */
                    /* catch() { ... } // from try @ 0224f8e8 with catch @ 0224ffa0 */
                    /* catch() { ... } // from try @ 0224fa58 with catch @ 0224ffa4 */
                    /* catch() { ... } // from try @ 0224fc34 with catch @ 0224ffa8 */
                    /* catch() { ... } // from try @ 0224f7d4 with catch @ 0224ffac
                       catch() { ... } // from try @ 0224fbe8 with catch @ 0224ffac */
            UnityEngine_AndroidJavaObject__Call_432fc68
                      (lVar13,*(undefined8 *)PTR_DAT_04cab3e0,plVar5,0);
            puVar2 = PTR_DAT_04cab3c0;
                    /* catch() { ... } // from try @ 0224fdd0 with catch @ 0224ffb0 */
                    /* catch() { ... } // from try @ 0224fd68 with catch @ 0224ffb4 */
                    /* catch() { ... } // from try @ 0224fd08 with catch @ 0224ffb8 */
            lVar13 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
                    /* catch() { ... } // from try @ 0224f8ac with catch @ 0224ffbc
                       catch() { ... } // from try @ 0224f8d8 with catch @ 0224ffbc
                       catch() { ... } // from try @ 0224f904 with catch @ 0224ffbc
                       catch() { ... } // from try @ 0224f930 with catch @ 0224ffbc
                       catch() { ... } // from try @ 0224f95c with catch @ 0224ffbc
                       catch() { ... } // from try @ 0224f9a0 with catch @ 0224ffbc */
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022500cc to 023500df has its CatchHandler @ 022500f0 */
              FUN_02133224();
            }
            lVar14 = UnityEngine_AndroidJavaObject__Get_long__264de68
                               (lVar13,*(undefined8 *)PTR_DAT_04cab3e8,
                                *(undefined8 *)PTR_DAT_04cab3c0);
                    /* catch() { ... } // from try @ 0224fb90 with catch @ 0224ffe4 */
                    /* catch() { ... } // from try @ 0224fe28 with catch @ 0224ffe8 */
                    /* catch() { ... } // from try @ 0224ff60 with catch @ 0224ffec */
            lVar13 = lVar14 + 0xfffff;
                    /* catch() { ... } // from try @ 0224fe70 with catch @ 0224fff0
                       catch() { ... } // from try @ 0224fe90 with catch @ 0224fff0 */
            if (-1 < lVar14) {
              lVar13 = lVar14;
            }
            lVar14 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar9 = UnityEngine_AndroidJavaObject__Get_long__264de68
                              (lVar14,*(undefined8 *)PTR_DAT_04cab408,*(undefined8 *)puVar2);
                    /* try { // try from 02250024 to 02350043 has its CatchHandler @ 02250024
                       catch() { ... } // from try @ 02250024 with catch @ 02250024
                       catch() { ... } // from try @ 02250058 with catch @ 02250024 */
            lVar14 = lVar9 + 0xfffff;
            if (-1 < lVar9) {
              lVar14 = lVar9;
            }
            lVar9 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
                    /* try { // try from 02250044 to 02350057 has its CatchHandler @ 02250068 */
            lVar10 = UnityEngine_AndroidJavaObject__Get_long__264de68
                               (lVar9,*(undefined8 *)PTR_DAT_04cab410,*(undefined8 *)puVar2);
                    /* try { // try from 02250058 to 0235007b has its CatchHandler @ 02250024 */
            lVar9 = lVar10 + 0xfffff;
            if (-1 < lVar10) {
              lVar9 = lVar10;
            }
            lVar10 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
                    /* catch() { ... } // from try @ 02250044 with catch @ 02250068 */
            if (lVar10 != 0) {
              bVar3 = UnityEngine_AndroidJavaObject__Get_bool__264de28
                                (lVar10,*(undefined8 *)PTR_DAT_04cab3d8,
                                 *(undefined8 *)PTR_DAT_04cab3b8);
              *(undefined4 *)((long)param_1 + 0x19) = 0;
              *param_1 = lVar13 >> 0x14;
              param_1[1] = lVar14 >> 0x14;
              param_1[2] = lVar9 >> 0x14;
              *(byte *)(param_1 + 3) = bVar3 & 1;
                    /* try { // try from 022500ac to 023500cb has its CatchHandler @ 022500ac
                       catch() { ... } // from try @ 022500ac with catch @ 022500ac
                       catch() { ... } // from try @ 022500e0 with catch @ 022500ac */
              *(undefined4 *)((long)param_1 + 0x1c) = 0;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
      UnityEngine_AndroidJavaClass___ctor_432cda0(lVar13,*(undefined8 *)PTR_DAT_04caa268,0);
      plStack_68 = &lStack_38;
      lStack_70 = 0;
      lStack_38 = lVar13;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar5 = (long *)UnityEngine_AndroidJavaObject__GetStatic_object__264e0a8
                                 (lVar13,*(undefined8 *)PTR_DAT_04caa2a0,
                                  *(undefined8 *)PTR_DAT_04ca9df8);
      plStack_40 = plVar5;
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      puVar2 = PTR_DAT_04cab3f8;
                    /* try { // try from 0224fd08 to 0234fd23 has its CatchHandler @ 0224ffb8 */
      if (plVar6 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cab3f8 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cab3f8,*(undefined8 *)(*plVar6 + 0x40)),
           lVar13 == 0)) {
          uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar7,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 0224fd68 to 0234fd87 has its CatchHandler @ 0224ffb4 */
          uVar7 = UnityEngine_AndroidJavaObject__Call_object__264c1e8
                            (plVar5,*(undefined8 *)PTR_DAT_04cab400,plVar6,
                             *(undefined8 *)PTR_DAT_04caa250);
          *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar7;
          thunk_FUN_02134474();
          plVar5 = plStack_40;
          if (plStack_40 != (long *)0x0) {
            lVar13 = *plStack_40;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
                  puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0224fdec;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
                    /* try { // try from 0224fdd0 to 0234fdef has its CatchHandler @ 0224ffb0 */
            puVar8 = (undefined8 *)FUN_0216b7a4(plStack_40,*(long *)PTR_DAT_04ca9b30,0);
LAB_0224fdec:
            (*(code *)*puVar8)(plVar5,puVar8[1]);
          }
          plVar5 = (long *)*plStack_68;
          if (plVar5 != (long *)0x0) {
            lVar13 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 0224fe28 to 0234fe43 has its CatchHandler @ 0224ffe8 */
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
                  puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0224fe6c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_0224fe6c:
                    /* try { // try from 0224fe70 to 0234fe7b has its CatchHandler @ 0224fff0 */
            (*(code *)*puVar8)(plVar5,puVar8[1]);
          }
                    /* try { // try from 0224fe7c to 0234fe8f has its CatchHandler @ 0224f750 */
          if (lStack_70 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022500cc with catch @ 022500f0 */
            FUN_0213321c();
          }
                    /* try { // try from 0224fe90 to 0234fe9b has its CatchHandler @ 0224fff0 */
          lVar14 = *(long *)PTR_DAT_04ca9d18;
          lVar13 = *(long *)(lVar14 + 0x38);
          if (lVar13 == 0) {
            FUN_0216b4cc(lVar14);
            lVar13 = *(long *)(lVar14 + 0x38);
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_0216b470();
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_0216b470();
          }
          uVar15 = **(undefined8 **)(lVar13 + 0xb8);
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9d80);
          UnityEngine_AndroidJavaObject___ctor_432f960
                    (uVar7,*(undefined8 *)PTR_DAT_04cab3f0,uVar15,0);
          puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
          *puVar8 = uVar7;
          thunk_FUN_02134474(puVar8,uVar7);
          lVar13 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
          goto LAB_0224ff38;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *param_1 = -1;
    param_1[1] = -1;
    param_1[2] = -1;
    param_1[3] = 0;
  }
  else {
    System_Nullable_DeviceMemory_Snapshot___get_Value_2bd2a44
              (&lStack_70,pcVar4,*(undefined8 *)PTR_DAT_04cab3d0);
    param_1[1] = (long)plStack_68;
    *param_1 = lStack_70;
    param_1[3] = lStack_58;
    param_1[2] = lStack_60;
  }
  return;
}

