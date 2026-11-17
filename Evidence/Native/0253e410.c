/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$SnakeCase
System_String_o* Dino_BusSand_Sdk_UnityIapProvider__SnakeCase (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$SnakeCase
   System_String_o* Dino_BusSand_Sdk_UnityIapProvider__SnakeCase (System_String_o* s, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__SnakeCase_243e410(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_04ca9b78;
  if ((bRam0000000004f9cc8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b78);
    bRam0000000004f9cc8e = 1;
  }
  plVar3 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Text_StringBuilder___ctor_46db61c(plVar3,0);
  puVar1 = PTR_DAT_04ca9ac8;
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar6 = 0;
      do {
        uVar2 = System_String__get_Chars_46ccb24(param_1,iVar6,0);
        lVar5 = *(long *)(puVar1 + 0x88);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar5);
        }
        uVar4 = System_Char__IsUpper_47bc0d8(uVar2,0);
        if ((iVar6 != 0) && ((uVar4 & 1) != 0)) {
          if (plVar3 == (long *)0x0) goto LAB_0253e540;
          System_Text_StringBuilder__Append_46dd710(plVar3,0x5f,0);
        }
        uVar2 = System_String__get_Chars_46ccb24(param_1,iVar6,0);
        lVar5 = *(long *)(puVar1 + 0x88);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar5);
        }
        uVar2 = System_Char__ToLowerInvariant_47bc5f4(uVar2,0);
        if (plVar3 == (long *)0x0) goto LAB_0253e540;
        System_Text_StringBuilder__Append_46dd710(plVar3,uVar2,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x10));
    }
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0253e53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      return;
    }
  }
LAB_0253e540:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

