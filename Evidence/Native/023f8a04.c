/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$Name
void Dino_BusSand_App_UI_LanguagePanel__Name (TMPro_TMP_Text_o* t, Dino_BusSand_App_UI_LanguagePanel_Row_o* row, System_String_o* code, bool native, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$Name
   void Dino_BusSand_App_UI_LanguagePanel__Name (TMPro_TMP_Text_o* t,
   Dino_BusSand_App_UI_LanguagePanel_Row_o* row, System_String_o* code, bool native, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_LanguagePanel__Name_22f8a04
               (long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_DAT_04cab758;
  if ((bRam0000000004f9c493 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab758);
    FUN_02132f7c(PTR_DAT_04cab760);
    bRam0000000004f9c493 = 1;
  }
  auVar7 = System_String__op_Equality_46d1108(param_3,*(undefined8 *)puVar1,0);
  if ((auVar7._0_8_ & 1) == 0) {
    auVar7 = System_String__op_Equality_46d1108(param_3,*(undefined8 *)PTR_DAT_04cab760,0);
    uVar3 = auVar7._0_4_;
    if ((param_4 & 1) != 0) goto LAB_023f8b44;
LAB_023f8a8c:
    if (param_2 == 0) goto LAB_023f8b94;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    lVar5 = *(long *)PTR_DAT_04ca9d18;
    lVar2 = *(long *)(lVar5 + 0x38);
    if (lVar2 == 0) {
      FUN_0216b4cc(lVar5);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0216b470();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0216b470();
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    uVar4 = Dino_BusSand_App_Lang__Get_215f9c0(uVar4,uVar6,0);
  }
  else {
    uVar3 = 1;
    if ((param_4 & 1) == 0) goto LAB_023f8a8c;
LAB_023f8b44:
    if (param_2 == 0) goto LAB_023f8b94;
    uVar4 = Dino_BusSand_App_Devanagari__OrderForTmp_214f8e8(*(undefined8 *)(param_2 + 0x10),0);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar4;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x518))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x520));
    uVar3 = param_4 & uVar3 & 1;
    if (*(byte *)(param_1 + 0x1e) == uVar3) {
      return;
    }
    *(char *)(param_1 + 0x1e) = (char)uVar3;
    *(undefined1 *)(param_1 + 0x76) = 1;
    (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300),0);
                    /* WARNING: Could not recover jumptable at 0x043cb6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    return;
  }
LAB_023f8b94:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(auVar7._0_8_,auVar7._8_8_);
}

