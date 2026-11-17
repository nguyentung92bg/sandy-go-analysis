/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<WaitForDatabuckets>d__11$$MoveNext
void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_d__11__MoveNext (Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<WaitForDatabuckets>d__11$$MoveNext
   void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_d__11__MoveNext
   (Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_d__11_o __this, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_d__11__MoveNext_243aba8
               (int *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined4 uStack_28;
  int iStack_24;
  
                    /* try { // try from 0253abb8 to 0263abbb has its CatchHandler @ 0253abc8 */
  if ((bRam0000000004f9cc6f & 1) == 0) {
                    /* catch() { ... } // from try @ 0253abb8 with catch @ 0253abc8 */
    FUN_02132f7c(PTR_DAT_04cbf460);
                    /* try { // try from 0253abd0 to 0263abd7 has its CatchHandler @ 0253abdc */
    FUN_02132f7c(PTR_DAT_04cbf468);
                    /* catch() { ... } // from try @ 0253ab84 with catch @ 0253abdc
                       catch() { ... } // from try @ 0253abd0 with catch @ 0253abdc */
    FUN_02132f7c(PTR_DAT_04caa970);
    bRam0000000004f9cc6f = 1;
  }
  puVar2 = PTR_DAT_04caa970;
  iStack_24 = 0;
  uStack_28 = 0;
  if (*param_1 != 0) goto LAB_0253ac2c;
  iStack_24 = param_1[8];
  param_1[8] = 0;
  *param_1 = -1;
  while( true ) {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_4076e3c(&iStack_24,0);
LAB_0253ac2c:
    if (cRam0000000004f9cca8 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbef68);
      cRam0000000004f9cca8 = '\x01';
    }
    puVar3 = PTR_DAT_04cbef68;
    lVar7 = *(long *)(*(long *)PTR_DAT_04cbef68 + 0xb8);
    if (*(char *)(lVar7 + 8) != '\0') break;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_28 = Cysharp_Threading_Tasks_UniTask__Yield_4072eb0(0);
                    /* try { // try from 0253ac7c to 0263af1f has its CatchHandler @ 0253ac7c
                       catch() { ... } // from try @ 0253ac7c with catch @ 0253ac7c
                       catch() { ... } // from try @ 0253af3c with catch @ 0253ac7c
                       catch() { ... } // from try @ 0253b13c with catch @ 0253ac7c
                       catch() { ... } // from try @ 0253b168 with catch @ 0253ac7c */
    iStack_24 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_4076e24(&uStack_28,0);
    uVar4 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_4076e34(&iStack_24,0);
    puVar3 = PTR_DAT_04cbf460;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      uVar6 = *(undefined8 *)puVar3;
      param_1[8] = iStack_24;
      FUN_02541394(param_1 + 2,&iStack_24,param_1,uVar6);
      return;
    }
  }
  if (cRam0000000004f9cca7 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbef68);
    cRam0000000004f9cca7 = '\x01';
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  }
  plVar10 = *(long **)(param_1 + 2);
  cVar1 = *(char *)(lVar7 + 9);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    *(char *)(param_1 + 6) = cVar1;
    return;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_04cbf468 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470(lVar7);
  }
  lVar8 = *plVar10;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0253ada0;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_0216b7a4(plVar10,lVar7,2);
LAB_0253ada0:
  (*(code *)*puVar5)(plVar10,cVar1 != '\0',puVar5[1]);
  return;
}

