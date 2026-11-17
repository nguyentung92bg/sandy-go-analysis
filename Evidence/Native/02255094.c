/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseObject
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_MiniJson__ParseObject (System_String_o* s, int32_t* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseObject
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_MiniJson__ParseObject
   (System_String_o* s, int32_t* i, const MethodInfo* method); */

long Dino_BusSand_App_MiniJson__ParseObject_2155094(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04ca9b50;
  puVar2 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9b7d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    bRam0000000004f9b7d8 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar5,*(undefined8 *)puVar3);
  *param_2 = *param_2 + 1;
  Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
  puVar2 = PTR_DAT_04ca9b58;
  if (param_1 != 0) {
    iVar1 = *param_2;
    if (iVar1 < *(int *)(param_1 + 0x10)) {
      do {
        sVar4 = System_String__get_Chars_46ccb24(param_1,iVar1,0);
        if (sVar4 == 0x7d) {
          *param_2 = *param_2 + 1;
          return lVar5;
        }
        sVar4 = System_String__get_Chars_46ccb24(param_1,*param_2,0);
        if (sVar4 == 0x2c) {
          *param_2 = *param_2 + 1;
        }
        else {
          uVar6 = Dino_BusSand_App_MiniJson__ParseString_21553c0(param_1,param_2);
          Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
          if ((*param_2 < *(int *)(param_1 + 0x10)) &&
             (sVar4 = System_String__get_Chars_46ccb24(param_1,*param_2,0), sVar4 == 0x3a)) {
            *param_2 = *param_2 + 1;
          }
          uVar7 = Dino_BusSand_App_MiniJson__ParseValue_2154e04(param_1,param_2);
          if (lVar5 == 0) goto LAB_0225522c;
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar5,uVar6,uVar7,*(undefined8 *)puVar2);
        }
        Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
        iVar1 = *param_2;
      } while (iVar1 < *(int *)(param_1 + 0x10));
    }
    return lVar5;
  }
LAB_0225522c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

