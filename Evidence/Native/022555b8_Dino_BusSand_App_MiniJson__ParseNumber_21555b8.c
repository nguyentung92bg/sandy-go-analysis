/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseNumber
Il2CppObject* Dino_BusSand_App_MiniJson__ParseNumber (System_String_o* s, int32_t* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseNumber
   Il2CppObject* Dino_BusSand_App_MiniJson__ParseNumber (System_String_o* s, int32_t* i, const
   MethodInfo* method); */

void Dino_BusSand_App_MiniJson__ParseNumber_21555b8(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9b7db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cab938);
    bRam0000000004f9b7db = 1;
  }
  puVar2 = PTR_DAT_04cab938;
  uStack_28 = 0;
  if (param_1 == 0) {
LAB_022556e8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *param_2;
  iVar7 = iVar1;
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    do {
      uVar3 = System_String__get_Chars_46ccb24(param_1,iVar7,0);
      if (*(long *)puVar2 == 0) goto LAB_022556e8;
      iVar4 = System_String__IndexOf_46d72c4(*(long *)puVar2,uVar3,0);
      iVar7 = *param_2;
      if (iVar4 < 0) break;
      iVar7 = iVar7 + 1;
      *param_2 = iVar7;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  puVar2 = PTR_DAT_04caa370;
  uVar5 = System_String__Substring_46d4848(param_1,iVar1,iVar7 - iVar1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  System_Double__TryParse_481811c(uVar5,0xa7,uVar6,&uStack_28,0);
  uStack_38 = uStack_28;
  FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&uStack_38);
  return;
}

