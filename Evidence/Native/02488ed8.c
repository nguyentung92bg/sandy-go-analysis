/* IL2CPP: Dino.BusSand.Haptics$$Play
void Dino_BusSand_Haptics__Play (int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0248963c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Haptics$$Play
   void Dino_BusSand_Haptics__Play (int32_t k, const MethodInfo* method); */

void Dino_BusSand_Haptics__Play_2388ed8(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  float fVar17;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cab238;
  if ((bRam0000000004f9c885 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb5598);
    FUN_02132f7c(PTR_DAT_04cbbce8);
    FUN_02132f7c(PTR_DAT_04cbbcf0);
    FUN_02132f7c(PTR_DAT_04cbbcf8);
    bRam0000000004f9c885 = 1;
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar3;
  }
  if (**(char **)(lVar10 + 0xb8) == '\0') {
    return;
  }
  fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (param_1 - 4U < 2) {
LAB_02488f84:
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    *(float *)(*(long *)(lVar10 + 0xb8) + 4) = fVar17;
    if (2 < param_1) {
      if (param_1 != 3) {
        if (param_1 == 4) {
          lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb5598,6);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                    (lVar10,*(undefined8 *)PTR_DAT_04cbbce8,0);
          lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,6);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                    (lVar4,*(undefined8 *)PTR_DAT_04cbbcf0,0);
          lVar14 = *(long *)puVar3;
        }
        else {
          if (param_1 != 5) {
            return;
          }
          lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb5598,4);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                    (lVar10,*(undefined8 *)PTR_DAT_04cbbcf8,0);
          lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,4);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(uint *)(lVar4 + 0x18) < 2) ||
             (*(undefined4 *)(lVar4 + 0x24) = 200, *(uint *)(lVar4 + 0x18) < 4)) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar14 = *(long *)puVar3;
          *(undefined4 *)(lVar4 + 0x2c) = 0xa0;
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar3 = PTR_DAT_04cab238;
        if ((bRam0000000004f9c888 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9de8);
          FUN_02132f7c(PTR_DAT_04cbbcb8);
          FUN_02132f7c(PTR_DAT_04cab238);
          FUN_02132f7c(PTR_DAT_04ca9b30);
          FUN_02132f7c(PTR_DAT_04ca9c20);
          FUN_02132f7c(PTR_DAT_04cbbcd0);
          FUN_02132f7c(PTR_DAT_04cbbcd8);
          FUN_02132f7c(PTR_DAT_04cbbd00);
          bRam0000000004f9c888 = 1;
        }
        uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar14 = Dino_BusSand_Haptics__Vibrator_238978c();
        if (lVar14 != 0) {
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar9 = *(long *)puVar3;
          }
          lVar15 = *(long *)(lVar9 + 0xb8);
          if (*(int *)(lVar15 + 0x28) < 0x1a) {
            plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if ((lVar10 != 0) &&
               (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
              uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar11,0);
            }
            if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[4] = lVar10;
            thunk_FUN_02134474(plVar5 + 4,lVar10);
            uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
            lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_60);
            if ((lVar10 != 0) &&
               (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
              uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar11,0);
            }
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[5] = lVar10;
            thunk_FUN_02134474(plVar5 + 5,lVar10);
            UnityEngine_AndroidJavaObject__Call_432fc68
                      (lVar14,*(undefined8 *)PTR_DAT_04cbbcd0,plVar5,0);
          }
          else {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar3;
              lVar15 = *(long *)(lVar9 + 0xb8);
            }
            if (*(long *)(lVar15 + 0x18) == 0) {
              uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
              UnityEngine_AndroidJavaClass___ctor_432cda0(uVar11,*(undefined8 *)PTR_DAT_04cbbcd8,0);
              lVar9 = *(long *)puVar3;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar9 = *(long *)puVar3;
              }
              puVar7 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
              *puVar7 = uVar11;
              thunk_FUN_02134474(puVar7,uVar11);
              lVar9 = *(long *)puVar3;
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar3;
            }
            puVar3 = PTR_DAT_04ca9c20;
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
            plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,3);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if ((lVar10 != 0) &&
               (lVar15 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar15 == 0)) {
              uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar11,0);
            }
            if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[4] = lVar10;
            thunk_FUN_02134474(plVar5 + 4,lVar10);
            if ((lVar4 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
              uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar11,0);
            }
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[5] = lVar4;
            thunk_FUN_02134474(plVar5 + 5,lVar4);
            uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
            lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_60);
            if ((lVar10 != 0) &&
               (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
              uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar11,0);
            }
            if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[6] = lVar10;
            thunk_FUN_02134474(plVar5 + 6,lVar10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            plVar5 = (long *)UnityEngine_AndroidJavaObject__CallStatic_object__264c990
                                       (lVar9,*(undefined8 *)PTR_DAT_04cbbd00,plVar5,
                                        *(undefined8 *)PTR_DAT_04cbbcb8);
            uStack_58 = &stack0xffffffffffffffc8;
            uStack_60 = 0;
            plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if ((plVar5 != (long *)0x0) &&
               (lVar10 = thunk_FUN_0216e7a0(plVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
            {
              uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar11,0);
            }
            if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar12[4] = (long)plVar5;
            thunk_FUN_02134474(plVar12 + 4,plVar5);
            UnityEngine_AndroidJavaObject__Call_432fc68
                      (lVar14,*(undefined8 *)PTR_DAT_04cbbcd0,plVar12,0);
            if (plVar5 != (long *)0x0) {
              lVar10 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04ca9b30) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0248952c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar8 != 0);
              }
              puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_0248952c:
              (*(code *)*puVar7)(plVar5,puVar7[1]);
            }
          }
        }
        return;
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = 0x2d;
      uVar13 = 0xff;
      goto Dino_BusSand_Haptics__Vibrate_23889e4;
    }
    if (param_1 != 0) {
      if (param_1 == 1) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = 0xe;
        uVar13 = 0x46;
      }
      else {
        if (param_1 != 2) {
          return;
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = 0x1a;
        uVar13 = 0x8c;
      }
      goto Dino_BusSand_Haptics__Vibrate_23889e4;
    }
  }
  else {
    if (param_1 != 0) {
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar3;
      }
      if (fVar17 - *(float *)(*(long *)(lVar10 + 0xb8) + 4) < _UNK_00e1fef8) {
        return;
      }
      goto LAB_02488f84;
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    lVar4 = *(long *)(lVar10 + 0xb8);
    if (fVar17 - *(float *)(lVar4 + 8) < _UNK_00e20658) {
      return;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
      lVar4 = *(long *)(lVar10 + 0xb8);
    }
    if (fVar17 - *(float *)(lVar4 + 4) < _UNK_00e2043c) {
      return;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
      lVar4 = *(long *)(lVar10 + 0xb8);
    }
    *(float *)(lVar4 + 8) = fVar17;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02489058 to 0258933b has its CatchHandler @ 02489058
                       catch() { ... } // from try @ 02489058 with catch @ 02489058
                       catch() { ... } // from try @ 02489490 with catch @ 02489058
                       catch() { ... } // from try @ 02489594 with catch @ 02489058
                       catch() { ... } // from try @ 02489664 with catch @ 02489058
                       catch() { ... } // from try @ 024896a0 with catch @ 02489058
                       catch() { ... } // from try @ 024896cc with catch @ 02489058
                       catch() { ... } // from try @ 02489720 with catch @ 02489058 */
  uVar11 = 8;
  uVar13 = 0x1e;
Dino_BusSand_Haptics__Vibrate_23889e4:
  puVar3 = PTR_DAT_04cab238;
  if ((bRam0000000004f9c887 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9de8);
    FUN_02132f7c(PTR_DAT_04cbbcb8);
    FUN_02132f7c(PTR_DAT_04cbbcc0);
    FUN_02132f7c(PTR_DAT_04cbbcc8);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cbbcd0);
    FUN_02132f7c(PTR_DAT_04cbbcd8);
    FUN_02132f7c(PTR_DAT_04cbbce0);
    bRam0000000004f9c887 = 1;
  }
  uStack_48 = 0;
  uStack_58 = (undefined1 *)((ulong)uStack_58._4_4_ << 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_Haptics__Vibrator_238978c();
  if (lVar10 != 0) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    lVar14 = *(long *)(lVar4 + 0xb8);
    if (*(int *)(lVar14 + 0x28) < 0x1a) {
      plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      uStack_68 = uVar11;
      lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_68);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((lVar4 != 0) &&
         (lVar14 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0)) {
        uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar5[4] = lVar4;
      thunk_FUN_02134474(plVar5 + 4,lVar4);
      UnityEngine_AndroidJavaObject__Call_432fc68(lVar10,*(undefined8 *)PTR_DAT_04cbbcd0,plVar5,0);
    }
    else {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
        lVar14 = *(long *)(lVar4 + 0xb8);
      }
      if (*(long *)(lVar14 + 0x18) == 0) {
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
        UnityEngine_AndroidJavaClass___ctor_432cda0(uVar6,*(undefined8 *)PTR_DAT_04cbbcd8,0);
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar3;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
        *puVar7 = uVar6;
        thunk_FUN_02134474(puVar7,uVar6);
        lVar4 = *(long *)puVar3;
      }
      if (0xfe < uVar13) {
        uVar13 = 0xff;
      }
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = uVar13 | (int)uVar11 << 9;
      uVar8 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (lVar4,uVar1,&uStack_48,*(undefined8 *)PTR_DAT_04cbbcc0);
      if ((uVar8 & 1) == 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
        plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
        puVar2 = PTR_DAT_04ca9ac8;
        uStack_68 = uVar11;
        lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_68);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((lVar4 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
          uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5[4] = lVar4;
        thunk_FUN_02134474(plVar5 + 4,lVar4);
        uStack_6c = uVar13;
        lVar4 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_6c);
        if ((lVar4 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
          uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,0);
        }
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5[5] = lVar4;
        thunk_FUN_02134474(plVar5 + 5,lVar4);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uStack_48 = UnityEngine_AndroidJavaObject__CallStatic_object__264c990
                              (lVar14,*(undefined8 *)PTR_DAT_04cbbce0,plVar5,
                               *(undefined8 *)PTR_DAT_04cbbcb8);
        lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                  (lVar4,uVar1,uStack_48,*(undefined8 *)PTR_DAT_04cbbcc8);
      }
      plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      lVar4 = uStack_48;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((uStack_48 != 0) &&
         (lVar14 = thunk_FUN_0216e7a0(uStack_48,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0)) {
        uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar5[4] = lVar4;
      thunk_FUN_02134474(plVar5 + 4,lVar4);
      UnityEngine_AndroidJavaObject__Call_432fc68(lVar10,*(undefined8 *)PTR_DAT_04cbbcd0,plVar5,0);
    }
  }
  return;
}

