/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$HideGuide
void Dino_BusSand_App_UI_DailyGiftPanel__HideGuide (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$HideGuide
   void Dino_BusSand_App_UI_DailyGiftPanel__HideGuide (Dino_BusSand_App_UI_DailyGiftPanel_o* __this,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_DailyGiftPanel__HideGuide_232bd74(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c603 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb8f40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8f48);
    FUN_02132f7c(PTR_DAT_04cb8f50);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c603 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0), lVar3 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return uVar2;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0),
       lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
      if ((*(long *)(param_1 + 0x58) != 0) &&
         ((lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar3 != 0 &&
          (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar3 != 0)))) {
        uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
        if ((uVar2 & 1) == 0) {
          if (((*(long *)(param_1 + 0x58) == 0) ||
              (lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar3 == 0)) ||
             (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar3 == 0))
          goto LAB_0242c038;
          uVar2 = UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
        }
        else {
          lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8f50);
          Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass49_0___ctor_232cec8(lVar3,0);
          if ((*(long *)(param_1 + 0x58) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar4 == 0)) goto LAB_0242c038;
          uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          uVar5 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar5,0);
          if (lVar3 == 0) goto LAB_0242c038;
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          thunk_FUN_02134474();
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cb8f48,0);
          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar3 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20390,uVar5,0);
          if ((lVar3 == 0) ||
             (lVar3 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0), lVar3 == 0))
          goto LAB_0242c038;
          uVar2 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar3,param_1,0);
        }
        if (*(char *)(param_1 + 0x41) != '\0') {
          return uVar2;
        }
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar5,param_1,*(undefined8 *)PTR_DAT_04cb8f40,0);
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e2098c,uVar5,0);
        if ((lVar3 != 0) &&
           (uVar2 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0), uVar2 != 0)) {
          *(long *)(uVar2 + 0x18) = param_1;
          thunk_FUN_02134474((long *)(uVar2 + 0x18),param_1,0);
          return uVar2;
        }
      }
    }
  }
LAB_0242c038:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

