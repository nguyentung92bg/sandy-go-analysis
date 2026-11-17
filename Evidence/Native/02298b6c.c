/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<WaitTap>d__72$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_d__72__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_d__72_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<WaitTap>d__72$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_d__72__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_d__72_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_d__72__MoveNext_2198b6c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9b9db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae0e0);
    FUN_02132f7c(PTR_DAT_04cadc80);
    bRam0000000004f9b9db = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 02298bc4 to 02398bd7 has its CatchHandler @ 02298bec */
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04ca9ae8;
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x9d) != '\0') goto LAB_02298d98;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0),
           lVar4 == 0)) goto LAB_02298e7c;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
      }
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(param_1 + 0x30),1,0);
      if (*(char *)(param_1 + 0x38) == '\0') {
        uVar5 = *(undefined8 *)(lVar6 + 0x60);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(lVar6 + 0x60) == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x60),0),
             lVar6 == 0)) goto LAB_02298e7c;
          UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
        }
      }
      return 0;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x9d) = 1;
LAB_02298d98:
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
  else {
                    /* try { // try from 02298bd8 to 02398c03 has its CatchHandler @ 02298b50 */
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04ca9ae8;
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 02298bc4 with catch @ 02298bec */
      uVar5 = *(undefined8 *)(lVar6 + 0x60);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      uVar5 = 0;
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar6 + 0x60) == 0) goto LAB_02298e7c;
        uVar5 = UnityEngine_Transform__Find_43d4bec
                          (*(long *)(lVar6 + 0x60),*(undefined8 *)PTR_DAT_04cae0e0,0);
      }
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      thunk_FUN_02134474();
      uVar5 = *(undefined8 *)(lVar6 + 0x60);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      uVar5 = 0;
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar6 + 0x60) == 0) goto LAB_02298e7c;
        uVar5 = UnityEngine_Transform__Find_43d4bec
                          (*(long *)(lVar6 + 0x60),*(undefined8 *)PTR_DAT_04cadc80,0);
      }
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x30));
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
      *(bool *)(param_1 + 0x38) = *(int *)(lVar6 + 0x98) != -1;
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
LAB_02298d2c:
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e207cc,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      if ((*(long *)(lVar6 + 0x60) != 0) &&
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x60),0),
         lVar6 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                  (*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0),
           lVar6 != 0)) {
          UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0);
          goto LAB_02298d2c;
        }
      }
    }
  }
LAB_02298e7c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

