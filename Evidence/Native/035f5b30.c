/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<WatchLostClose>d__29<bool>$$MoveNext
void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_bool___MoveNext (Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_bool__o __this, const MethodInfo_34F5B30* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<WatchLostClose>d__29<bool>$$MoveNext
   void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_bool___MoveNext
   (Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_bool__o __this, const MethodInfo_34F5B30*
   method); */

void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_bool___MoveNext_34f5b30
               (int *param_1,long param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  byte abStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_48;
  int iStack_44;
  
  if ((bRam0000000004f9fa8b & 1) == 0) {
                    /* try { // try from 035f5b5c to 036f5c0f has its CatchHandler @ 035f93a8 */
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cc7008);
    FUN_02132f7c(PTR_DAT_04cc7010);
    FUN_02132f7c(PTR_DAT_04cc7018);
    bRam0000000004f9fa8b = 1;
  }
  puVar5 = PTR_DAT_04cbeff0;
  puVar4 = PTR_DAT_04caa970;
  puVar3 = PTR_DAT_04caa210;
  iStack_44 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  abStack_58[0] = 0;
  if (*param_1 == 0) {
    iStack_44 = param_1[0x18];
    param_1[0x18] = 0;
    *param_1 = -1;
    goto LAB_035f5da4;
  }
  lVar12 = *(long *)(param_1 + 4);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 035f5c20 to 036f5c3b has its CatchHandler @ 035f9284 */
  auVar16 = Cysharp_Threading_Tasks_UniTaskCompletionSource_bool___get_Task_3033ad4
                      (lVar12,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar16;
  thunk_FUN_02134474((undefined1 (*) [16])(param_1 + 0x10),0);
  iVar14 = *(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
  thunk_FUN_02142dc8();
  param_1[0x14] = iVar14;
  *(undefined1 *)(param_1 + 0x15) = 0;
                    /* try { // try from 035f5c54 to 036f5d07 has its CatchHandler @ 035f93a4 */
  iVar14 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  param_1[0x16] = iVar14;
  param_1[0x17] = -0x40800000;
LAB_035f5c98:
  do {
    lVar12 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    plVar13 = *(long **)(param_1 + 0x10);
    if (plVar13 == (long *)0x0) goto LAB_035f6120;
    uVar2 = *(undefined2 *)((long)param_1 + 0x4a);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470(lVar12);
    }
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_035f5d40;
        }
        uVar10 = uVar10 - 1;
                    /* try { // try from 035f5d18 to 036f5d33 has its CatchHandler @ 035f9280 */
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar13,lVar12,1);
LAB_035f5d40:
                    /* try { // try from 035f5d4c to 036f5dff has its CatchHandler @ 035f93a0 */
    iVar14 = (*(code *)*puVar8)(plVar13,uVar2,puVar8[1]);
    if (iVar14 != 0) goto LAB_035f6120;
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x10);
    thunk_FUN_02142dc8();
    if (cVar1 != '\0') goto LAB_035f6120;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_48 = Cysharp_Threading_Tasks_UniTask__Yield_4072eb0(0);
    iStack_44 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_4076e24(&uStack_48,0);
    uVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_4076e34(&iStack_44,0);
    if ((uVar10 & 1) == 0) {
      *param_1 = 0;
      param_1[0x18] = iStack_44;
      lVar12 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0216b470();
      }
                    /* try { // try from 035f5f3c to 036f5fef has its CatchHandler @ 035f9398 */
      FUN_027c8fc8(param_1 + 2,&iStack_44,param_1,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x20));
      return;
    }
LAB_035f5da4:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_4076e3c(&iStack_44,0);
    fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    iVar14 = *(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
    thunk_FUN_02142dc8();
    if (iVar14 != param_1[0x14]) {
      param_1[0x17] = (int)fVar15;
      *(undefined1 *)(param_1 + 0x15) = 1;
      param_1[0x14] = iVar14;
    }
    if (fVar15 - (float)param_1[0x16] <= 2.5) {
                    /* try { // try from 035f5e10 to 036f5e2b has its CatchHandler @ 035f927c */
      if ((char)param_1[0x15] != '\0') goto LAB_035f5e14;
      lVar12 = *(long *)(param_1 + 6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar10 = (**(code **)(lVar12 + 0x18))
                         (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
      if ((uVar10 & 1) != 0) goto LAB_035f5dfc;
                    /* try { // try from 035f5f08 to 036f5f23 has its CatchHandler @ 035f9278 */
      param_1[0x16] = (int)fVar15;
      if ((char)param_1[0x15] == '\0') goto LAB_035f5c98;
    }
    else {
LAB_035f5dfc:
      param_1[0x17] = (int)fVar15;
      *(undefined1 *)(param_1 + 0x15) = 1;
LAB_035f5e14:
      param_1[0x16] = (int)fVar15;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Application__get_isFocused_4351f14(0);
    if ((uVar10 & 1) == 0) {
      param_1[0x17] = (int)fVar15;
      goto LAB_035f5c98;
    }
                    /* try { // try from 035f5e44 to 036f5ef7 has its CatchHandler @ 035f939c */
  } while (fVar15 - (float)param_1[0x17] < 3.0);
  lVar12 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    uVar2 = *(undefined2 *)((long)param_1 + 0x4a);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470(lVar12);
    }
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_035f5f5c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar13,lVar12,1);
LAB_035f5f5c:
    iVar14 = (*(code *)*puVar8)(plVar13,uVar2,puVar8[1]);
    if (iVar14 == 0) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x10);
      thunk_FUN_02142dc8();
      if (cVar1 == '\0') {
        lVar12 = *(long *)(param_1 + 10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
          FUN_0216b470();
        }
        bVar6 = (**(code **)(lVar12 + 0x18))
                          (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
        lVar12 = *(long *)(param_1 + 4);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar7 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
        uVar10 = Cysharp_Threading_Tasks_UniTaskCompletionSource_bool___TrySetResult_3033b04
                           (lVar12,bVar6 & 1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x58));
        if ((uVar10 & 1) != 0) {
          lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
                    /* try { // try from 035f6000 to 036f601b has its CatchHandler @ 035f9274 */
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          FUN_01e76ff0(lVar12,0,*(undefined8 *)PTR_DAT_04cc7018);
          FUN_01e76ff0(lVar12,1,*(undefined8 *)(param_1 + 0xc));
                    /* try { // try from 035f6034 to 036f60e7 has its CatchHandler @ 035f9394 */
          FUN_01e76ff0(lVar12,2,*(undefined8 *)PTR_DAT_04cc7010);
          uStack_54 = 0x40400000;
          uVar9 = System_Single__ToString_48425d0(&uStack_54,0);
          FUN_01e76ff0(lVar12,3,uVar9);
          FUN_01e76ff0(lVar12,4,*(undefined8 *)PTR_DAT_04cc7008);
          abStack_58[0] = bVar6 & 1;
          if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x28) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          uVar9 = System_Boolean__ToString_47b93d0
                            (abStack_58,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
          FUN_01e76ff0(lVar12,5,uVar9);
          uVar9 = System_String__Concat_46d31f0(lVar12,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                    /* try { // try from 035f60f8 to 036f6113 has its CatchHandler @ 035f9270 */
            thunk_FUN_0218fdac();
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar9,0);
          lVar12 = *(long *)(param_1 + 0xe);
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
          }
        }
      }
    }
  }
LAB_035f6120:
                    /* try { // try from 035f612c to 036f61df has its CatchHandler @ 035f93b0 */
  *param_1 = -2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_02247558(param_1 + 2,0);
  return;
}

