/* IL2CPP: Dino.BusSand.Haptics$$Vibrate
void Dino_BusSand_Haptics__Vibrate (int64_t ms, int32_t amplitude, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Haptics$$Vibrate
   void Dino_BusSand_Haptics__Vibrate (int64_t ms, int32_t amplitude, const MethodInfo* method); */

void Dino_BusSand_Haptics__Vibrate_23889e4(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uStack_6c;
  undefined8 auStack_68 [2];
  undefined4 uStack_58;
  long lStack_48;
  
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
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_Haptics__Vibrator_238978c();
  if (lVar4 != 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    lVar11 = *(long *)(lVar5 + 0xb8);
    if (*(int *)(lVar11 + 0x28) < 0x1a) {
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      auStack_68[0] = param_1;
      lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),auStack_68);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((lVar5 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
        uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar10,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[4] = lVar5;
      thunk_FUN_02134474(plVar6 + 4,lVar5);
      UnityEngine_AndroidJavaObject__Call_432fc68(lVar4,*(undefined8 *)PTR_DAT_04cbbcd0,plVar6,0);
    }
    else {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
        lVar11 = *(long *)(lVar5 + 0xb8);
      }
      if (*(long *)(lVar11 + 0x18) == 0) {
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
        UnityEngine_AndroidJavaClass___ctor_432cda0(uVar10,*(undefined8 *)PTR_DAT_04cbbcd8,0);
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
        *puVar7 = uVar10;
        thunk_FUN_02134474(puVar7,uVar10);
        lVar5 = *(long *)puVar3;
      }
      if (0xfe < (int)param_2) {
        param_2 = 0xff;
      }
      if ((int)param_2 < 2) {
        param_2 = 1;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = param_2 | (int)param_1 << 9;
      uVar8 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (lVar5,uVar1,&lStack_48,*(undefined8 *)PTR_DAT_04cbbcc0);
      if ((uVar8 & 1) == 0) {
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
        plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
        puVar2 = PTR_DAT_04ca9ac8;
        auStack_68[0] = param_1;
        lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),auStack_68);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6[4] = lVar5;
        thunk_FUN_02134474(plVar6 + 4,lVar5);
        uStack_6c = param_2;
        lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_6c);
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,0);
        }
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6[5] = lVar5;
        thunk_FUN_02134474(plVar6 + 5,lVar5);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lStack_48 = UnityEngine_AndroidJavaObject__CallStatic_object__264c990
                              (lVar11,*(undefined8 *)PTR_DAT_04cbbce0,plVar6,
                               *(undefined8 *)PTR_DAT_04cbbcb8);
        lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                  (lVar5,uVar1,lStack_48,*(undefined8 *)PTR_DAT_04cbbcc8);
      }
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      lVar5 = lStack_48;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((lStack_48 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lStack_48,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
        uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar10,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[4] = lVar5;
      thunk_FUN_02134474(plVar6 + 4,lVar5);
      UnityEngine_AndroidJavaObject__Call_432fc68(lVar4,*(undefined8 *)PTR_DAT_04cbbcd0,plVar6,0);
    }
  }
  return;
}

