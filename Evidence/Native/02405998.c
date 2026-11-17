/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$OnSecretTap
void Dino_BusSand_App_UI_SettingPanel__OnSecretTap (System_Action_o* reopen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$OnSecretTap
   void Dino_BusSand_App_UI_SettingPanel__OnSecretTap (System_Action_o* reopen, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_SettingPanel__OnSecretTap_2305998(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  
  puVar3 = PTR_DAT_04cb7e80;
  if ((bRam0000000004f9c4fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7e80);
    FUN_02132f7c(PTR_DAT_04cb7ea8);
    FUN_02132f7c(PTR_DAT_04cb7eb0);
    bRam0000000004f9c4fb = 1;
  }
  fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
  if (fVar8 - *(float *)(lVar5 + 8) <= _UNK_00e20178) {
    *(float *)(lVar5 + 8) = fVar8;
    iVar1 = *(int *)(lVar5 + 4) + 1;
    *(int *)(lVar5 + 4) = iVar1;
    puVar2 = PTR_DAT_04cab380;
    if (9 < iVar1) {
      *(undefined4 *)(lVar5 + 4) = 0;
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      if ((*(long *)(lVar5 + 8) != 0) ||
         ((lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0 &&
          ((**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28)),
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) != 0)))) {
        lVar6 = *(long *)PTR_DAT_04ca9d18;
        **(undefined1 **)(*(long *)puVar3 + 0xb8) = 1;
        lVar5 = *(long *)(lVar6 + 0x38);
        if (lVar5 == 0) {
          FUN_0216b4cc(lVar6);
          lVar5 = *(long *)(lVar6 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0216b470();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0216b470();
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5c0);
        }
        Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb7ea8,uVar7,0);
        puVar3 = PTR_DAT_04caba50;
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 02405bc0 to 02505c13 has its CatchHandler @ 02405bc0
                       catch() { ... } // from try @ 02405bc0 with catch @ 02405bc0
                       catch() { ... } // from try @ 02405c88 with catch @ 02405bc0
                       catch() { ... } // from try @ 02405cc8 with catch @ 02405bc0
                       catch() { ... } // from try @ 02405d28 with catch @ 02405bc0 */
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar3;
          }
          if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* try { // try from 02405c14 to 02505c17 has its CatchHandler @ 02405c94 */
          Dino_BusSand_App_GameApp__Toast_2166a6c
                    (**(long **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_04cb7eb0,0);
        }
        if (param_1 != 0) {
                    /* try { // try from 02405c24 to 02505c87 has its CatchHandler @ 02405c98 */
                    /* WARNING: Could not recover jumptable at 0x02405c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
          return;
        }
      }
    }
  }
  else {
    *(float *)(lVar5 + 8) = fVar8;
    *(undefined4 *)(lVar5 + 4) = 1;
  }
  return;
}

