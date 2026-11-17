/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<WatchLostClose>d__29<ValueTuple<bool, object>>$$MoveNext
void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_ValueTuple_bool__object____MoveNext (Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_ValueTuple_bool__object___o __this, const MethodInfo_34F53D8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<WatchLostClose>d__29<ValueTuple<bool, object>>$$MoveNext
   void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_ValueTuple_bool__object____MoveNext
   (Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_ValueTuple_bool__object___o __this, const
   MethodInfo_34F53D8* method); */

void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_ValueTuple_bool__object____MoveNext_34f53d8
               (int *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_54;
  undefined4 uStack_48;
  int iStack_44;
  
  if ((bRam0000000004f9fa8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbeff0);
                    /* try { // try from 035f542c to 036f5447 has its CatchHandler @ 035f92b8 */
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cc7008);
    FUN_02132f7c(PTR_DAT_04cc7010);
    FUN_02132f7c(PTR_DAT_04cc7018);
    bRam0000000004f9fa8a = 1;
  }
  puVar4 = PTR_DAT_04cbeff0;
  puVar3 = PTR_DAT_04caa970;
  puVar2 = PTR_DAT_04caa210;
                    /* try { // try from 035f546c to 036f54bf has its CatchHandler @ 035f9304 */
  iStack_44 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  auStack_68._8_8_ = 0;
  auStack_68._0_8_ = 0;
  uStack_70 = 0;
  if (*param_1 == 0) {
    iStack_44 = param_1[0x1c];
    param_1[0x1c] = 0;
    *param_1 = -1;
    goto LAB_035f5658;
  }
  lVar10 = *(long *)(param_1 + 4);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource_ValueTuple_bool__object____get_Task_30326e8
            (&uStack_c0,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10));
                    /* try { // try from 035f54d4 to 036f54ef has its CatchHandler @ 035f92b4 */
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  *(undefined8 *)(param_1 + 0x12) = uStack_b8;
  *(undefined8 *)(param_1 + 0x10) = uStack_c0;
  *(undefined8 *)(param_1 + 0x16) = uStack_a8;
  *(undefined8 *)(param_1 + 0x14) = uStack_b0;
  thunk_FUN_02134474(param_1 + 0x10,0);
  iVar12 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14);
  thunk_FUN_02142dc8();
  param_1[0x18] = iVar12;
  *(undefined1 *)(param_1 + 0x19) = 0;
                    /* try { // try from 035f5504 to 036f5557 has its CatchHandler @ 035f9300 */
  iVar12 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  param_1[0x1a] = iVar12;
  param_1[0x1b] = -0x40800000;
LAB_035f554c:
  do {
    lVar10 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 == (long *)0x0) goto LAB_035f59bc;
                    /* try { // try from 035f556c to 036f5587 has its CatchHandler @ 035f92b0 */
    iVar12 = param_1[0x16];
    lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                    /* try { // try from 035f559c to 036f55ef has its CatchHandler @ 035f92fc */
      lVar10 = FUN_0216b470(lVar10);
    }
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_035f55f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar11,lVar10,1);
LAB_035f55f4:
    iVar12 = (*(code *)*puVar6)(plVar11,(short)iVar12,puVar6[1]);
                    /* try { // try from 035f5604 to 036f561f has its CatchHandler @ 035f92ac */
    if (iVar12 != 0) goto LAB_035f59bc;
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x10);
    thunk_FUN_02142dc8();
    if (cVar1 != '\0') goto LAB_035f59bc;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_48 = Cysharp_Threading_Tasks_UniTask__Yield_4072eb0(0);
                    /* try { // try from 035f5634 to 036f5687 has its CatchHandler @ 035f92f8 */
    iStack_44 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_4076e24(&uStack_48,0);
    uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_4076e34(&iStack_44,0);
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 035f57cc to 036f57e7 has its CatchHandler @ 035f929c */
      *param_1 = 0;
      param_1[0x1c] = iStack_44;
      lVar10 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0216b470();
      }
      FUN_027c8ebc(param_1 + 2,&iStack_44,param_1,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
      return;
                    /* try { // try from 035f57fc to 036f584f has its CatchHandler @ 035f92e8 */
    }
LAB_035f5658:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_4076e3c(&iStack_44,0);
    fVar13 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    iVar12 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14);
    thunk_FUN_02142dc8();
    if (iVar12 != param_1[0x18]) {
      param_1[0x1b] = (int)fVar13;
      *(undefined1 *)(param_1 + 0x19) = 1;
      param_1[0x18] = iVar12;
    }
                    /* try { // try from 035f569c to 036f56b7 has its CatchHandler @ 035f92a4 */
    if (fVar13 - (float)param_1[0x1a] <= 2.5) {
      if ((char)param_1[0x19] != '\0') goto LAB_035f56c8;
      lVar10 = *(long *)(param_1 + 6);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar8 = (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
      if ((uVar8 & 1) != 0) goto LAB_035f56b0;
      param_1[0x1a] = (int)fVar13;
      if ((char)param_1[0x19] == '\0') goto LAB_035f554c;
    }
    else {
LAB_035f56b0:
      param_1[0x1b] = (int)fVar13;
      *(undefined1 *)(param_1 + 0x19) = 1;
LAB_035f56c8:
      param_1[0x1a] = (int)fVar13;
    }
                    /* try { // try from 035f56cc to 036f571f has its CatchHandler @ 035f92f4 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Application__get_isFocused_4351f14(0);
    if ((uVar8 & 1) == 0) {
      param_1[0x1b] = (int)fVar13;
      goto LAB_035f554c;
    }
  } while (fVar13 - (float)param_1[0x1b] < 3.0);
  lVar10 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 != (long *)0x0) {
    iVar12 = param_1[0x16];
    lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                    /* try { // try from 035f5734 to 036f574f has its CatchHandler @ 035f92a0 */
      lVar10 = FUN_0216b470();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470(lVar10);
    }
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 035f5764 to 036f57b7 has its CatchHandler @ 035f92ec */
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_035f5810;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar11,lVar10,1);
LAB_035f5810:
    iVar12 = (*(code *)*puVar6)(plVar11,(short)iVar12,puVar6[1]);
    if (iVar12 == 0) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x10);
      thunk_FUN_02142dc8();
      if (cVar1 == '\0') {
        lVar10 = *(long *)(param_1 + 10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
          FUN_0216b470();
        }
        auVar14 = (**(code **)(lVar10 + 0x18))
                            (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
                    /* try { // try from 035f5864 to 036f587f has its CatchHandler @ 035f9298 */
        lVar10 = *(long *)(param_1 + 4);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar5 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0216b470();
        }
                    /* try { // try from 035f588c to 036f5897 has its CatchHandler @ 035f9238 */
        uVar8 = Cysharp_Threading_Tasks_UniTaskCompletionSource_ValueTuple_bool__object____TrySetResult_3032718
                          (lVar10,auVar14._0_8_,auVar14._8_8_,
                           *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
        if ((uVar8 & 1) != 0) {
                    /* try { // try from 035f58ac to 036f58cb has its CatchHandler @ 035f92bc */
          lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          FUN_01e76ff0(lVar10,0,*(undefined8 *)PTR_DAT_04cc7018);
                    /* try { // try from 035f58dc to 036f58f7 has its CatchHandler @ 035f9290 */
          FUN_01e76ff0(lVar10,1,*(undefined8 *)(param_1 + 0xc));
          FUN_01e76ff0(lVar10,2,*(undefined8 *)PTR_DAT_04cc7010);
          uStack_54 = 0x40400000;
                    /* try { // try from 035f5910 to 036f5913 has its CatchHandler @ 035f931c */
          uVar7 = System_Single__ToString_48425d0(&uStack_54,0);
          FUN_01e76ff0(lVar10,3,uVar7);
          FUN_01e76ff0(lVar10,4,*(undefined8 *)PTR_DAT_04cc7008);
          lVar5 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f5940 to 036f5983 has its CatchHandler @ 035f92e4 */
          auStack_68 = auVar14;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0216b470();
          }
          uVar7 = System_ValueTuple_bool__object___ToString_30d5600
                            (auStack_68,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x60));
          FUN_01e76ff0(lVar10,5,uVar7);
          uVar7 = System_String__Concat_46d31f0(lVar10,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 035f5998 to 036f59b3 has its CatchHandler @ 035f9294 */
          UnityEngine_Debug__LogWarning_4357a30(uVar7,0);
          lVar10 = *(long *)(param_1 + 0xe);
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
          }
        }
      }
    }
  }
LAB_035f59bc:
                    /* try { // try from 035f59cc to 036f5a1f has its CatchHandler @ 035f931c */
  *param_1 = -2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_02247558(param_1 + 2,0);
  return;
}

