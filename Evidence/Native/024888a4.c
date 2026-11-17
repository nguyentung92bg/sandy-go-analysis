/* IL2CPP: Dino.BusSand.Haptics$$Tick
void Dino_BusSand_Haptics__Tick (float strength01, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Haptics$$Tick
   void Dino_BusSand_Haptics__Tick (float strength01, const MethodInfo* method); */

void Dino_BusSand_Haptics__Tick_23888a4(float param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  uint uStack_6c;
  undefined8 auStack_68 [2];
  undefined4 uStack_58;
  long lStack_48;
  
  puVar3 = PTR_DAT_04cab238;
  if ((bRam0000000004f9c884 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c884 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  if (**(char **)(lVar4 + 0xb8) != '\0') {
    fVar12 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    lVar10 = *(long *)(lVar4 + 0xb8);
    if (_UNK_00e20658 <= fVar12 - *(float *)(lVar10 + 8)) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
        lVar10 = *(long *)(lVar4 + 0xb8);
      }
      if (_UNK_00e2043c <= fVar12 - *(float *)(lVar10 + 4)) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
        }
        *(float *)(lVar10 + 8) = fVar12;
        puVar3 = PTR_DAT_04cab238;
        fVar12 = 1.0;
        if (param_1 <= 1.0) {
          fVar12 = param_1;
        }
        fVar13 = 0.0;
        if (0.0 <= param_1) {
          fVar13 = fVar12 * 54.0;
        }
        uVar1 = 0x8000001a;
        if (fVar13 != INFINITY) {
          uVar1 = (int)fVar13 + 0x1a;
        }
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
        lStack_48 = 0;
        uStack_58 = 0;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = Dino_BusSand_Haptics__Vibrator_238978c();
        if (lVar4 != 0) {
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar10 = *(long *)puVar3;
          }
          lVar11 = *(long *)(lVar10 + 0xb8);
          if (*(int *)(lVar11 + 0x28) < 0x1a) {
            plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
            auStack_68[0] = 8;
            lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),auStack_68);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar9,0);
            }
            if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[4] = lVar10;
            thunk_FUN_02134474(plVar5 + 4,lVar10);
            UnityEngine_AndroidJavaObject__Call_432fc68
                      (lVar4,*(undefined8 *)PTR_DAT_04cbbcd0,plVar5,0);
          }
          else {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar3;
              lVar11 = *(long *)(lVar10 + 0xb8);
            }
            if (*(long *)(lVar11 + 0x18) == 0) {
              uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
              UnityEngine_AndroidJavaClass___ctor_432cda0(uVar9,*(undefined8 *)PTR_DAT_04cbbcd8,0);
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar10 = *(long *)puVar3;
              }
              puVar6 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
              *puVar6 = uVar9;
              thunk_FUN_02134474(puVar6,uVar9);
              lVar10 = *(long *)puVar3;
            }
            if (0xfe < (int)uVar1) {
              uVar1 = 0xff;
            }
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar3;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                              (lVar10,uVar1 | 0x1000,&lStack_48,*(undefined8 *)PTR_DAT_04cbbcc0);
            if ((uVar7 & 1) == 0) {
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar10 = *(long *)puVar3;
              }
              lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
              plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
              puVar2 = PTR_DAT_04ca9ac8;
              auStack_68[0] = 8;
              lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),auStack_68);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if ((lVar10 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
                uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar9,0);
              }
              if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar5[4] = lVar10;
              thunk_FUN_02134474(plVar5 + 4,lVar10);
              uStack_6c = uVar1;
              lVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_6c);
              if ((lVar10 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
                uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar9,0);
              }
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar5[5] = lVar10;
              thunk_FUN_02134474(plVar5 + 5,lVar10);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lStack_48 = UnityEngine_AndroidJavaObject__CallStatic_object__264c990
                                    (lVar11,*(undefined8 *)PTR_DAT_04cbbce0,plVar5,
                                     *(undefined8 *)PTR_DAT_04cbbcb8);
              lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                        (lVar10,uVar1 | 0x1000,lStack_48,*(undefined8 *)PTR_DAT_04cbbcc8);
            }
            plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
            lVar10 = lStack_48;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if ((lStack_48 != 0) &&
               (lVar11 = thunk_FUN_0216e7a0(lStack_48,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0)
               ) {
              uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar9,0);
            }
            if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar5[4] = lVar10;
            thunk_FUN_02134474(plVar5 + 4,lVar10);
            UnityEngine_AndroidJavaObject__Call_432fc68
                      (lVar4,*(undefined8 *)PTR_DAT_04cbbcd0,plVar5,0);
          }
        }
        return;
      }
    }
  }
  return;
}

