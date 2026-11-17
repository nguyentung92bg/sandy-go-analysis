/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$OnRestoreClick
void Dino_BusSand_App_UI_SettingPanel__OnRestoreClick (Dino_BusSand_App_UI_SettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$OnRestoreClick
   void Dino_BusSand_App_UI_SettingPanel__OnRestoreClick (Dino_BusSand_App_UI_SettingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingPanel__OnRestoreClick_2306e88(long param_1)

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
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000004f9c4ff & 1) == 0) {
                    /* try { // try from 02406ea0 to 02506eab has its CatchHandler @ 02407390 */
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cac5c0);
                    /* try { // try from 02406ebc to 02506ec7 has its CatchHandler @ 024073a8 */
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad1f0);
                    /* try { // try from 02406ed8 to 02506f23 has its CatchHandler @ 024073fc */
    FUN_02132f7c(PTR_DAT_04cb7f98);
    FUN_02132f7c(PTR_DAT_04cb7fa0);
    bRam0000000004f9c4ff = 1;
  }
  puVar1 = PTR_DAT_04ca9d18;
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar10 = *(long *)puVar1;
  lVar6 = *(long *)(lVar10 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar10);
    lVar6 = *(long *)(lVar10 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 02406f34 to 02506f3f has its CatchHandler @ 024073d0 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02406f50 to 02506f67 has its CatchHandler @ 024073f0 */
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  uVar11 = **(undefined8 **)(lVar6 + 0xb8);
                    /* try { // try from 02406f7c to 02506f87 has its CatchHandler @ 0240738c */
  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5c0);
  }
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb7fa0,uVar11,0);
                    /* try { // try from 02406fa4 to 02506fab has its CatchHandler @ 02407370 */
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                    /* try { // try from 02406fc8 to 02506fcf has its CatchHandler @ 0240737c */
  System_Action_bool____ctor_35ee0e8(lVar6,param_1,*(undefined8 *)PTR_DAT_04cb7f98,0);
  if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
                    /* try { // try from 02406fe0 to 02506feb has its CatchHandler @ 02407384 */
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9b8ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0,0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad208);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad210);
    bRam0000000004f9b8ff = 1;
  }
  lVar9 = *(long *)puVar1;
  lVar10 = *(long *)(lVar9 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar9);
    lVar10 = *(long *)(lVar9 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cac5c0;
  lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  puVar3 = PTR_DAT_04cad210;
  puVar2 = PTR_DAT_04cad1f0;
  uVar11 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04cad208;
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,uVar11);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  plVar4 = (long *)thunk_FUN_0216e7a0(**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar1);
  if (plVar4 == (long *)0x0) {
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0227a500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),1,*(undefined8 *)(lVar6 + 0x28));
      return;
    }
    return;
  }
  lVar9 = *plVar4;
  lVar10 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar10) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0227a510;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,lVar10,0);
LAB_0227a510:
                    /* WARNING: Could not recover jumptable at 0x0227a528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,lVar6,puVar5[1]);
  return;
}

