/* IL2CPP: Dino.BusSand.App.Iap$$Restore
void Dino_BusSand_App_Iap__Restore (System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$Restore
   void Dino_BusSand_App_Iap__Restore (System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_App_Iap__Restore_217a374(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9b8ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad208);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad210);
    bRam0000000004f9b8ff = 1;
  }
  lVar9 = *(long *)puVar1;
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
                    /* try { // try from 0227a40c to 0237a417 has its CatchHandler @ 0227a448 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cac5c0;
                    /* try { // try from 0227a418 to 0237a463 has its CatchHandler @ 0227a310 */
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  puVar3 = PTR_DAT_04cad210;
  puVar2 = PTR_DAT_04cad1f0;
                    /* catch() { ... } // from try @ 0227a40c with catch @ 0227a448 */
  uVar10 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04cad208;
                    /* try { // try from 0227a464 to 0237a4d7 has its CatchHandler @ 0227a464
                       catch() { ... } // from try @ 0227a464 with catch @ 0227a464
                       catch() { ... } // from try @ 0227a4e4 with catch @ 0227a464 */
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,uVar10);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  plVar4 = (long *)thunk_FUN_0216e7a0(**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar1);
  if (plVar4 == (long *)0x0) {
    if (param_1 != 0) {
                    /* try { // try from 0227a4e4 to 0237a52f has its CatchHandler @ 0227a464 */
                    /* WARNING: Could not recover jumptable at 0x0227a500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))
                (*(undefined8 *)(param_1 + 0x40),1,*(undefined8 *)(param_1 + 0x28));
      return;
    }
                    /* try { // try from 0227a530 to 0237a62b has its CatchHandler @ 0227a530
                       catch() { ... } // from try @ 0227a530 with catch @ 0227a530
                       catch() { ... } // from try @ 0227a638 with catch @ 0227a530 */
    return;
  }
  lVar9 = *plVar4;
  lVar6 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0227a510;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 0227a4d8 to 0237a4e3 has its CatchHandler @ 0227a514 */
  puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,lVar6,0);
LAB_0227a510:
                    /* catch() { ... } // from try @ 0227a4d8 with catch @ 0227a514 */
                    /* WARNING: Could not recover jumptable at 0x0227a528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_1,puVar5[1]);
  return;
}

