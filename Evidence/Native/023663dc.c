/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$RowInts
System_Int32_array* Dino_BusSand_App_Meta_Monetization__RowInts (System_String_o* id, System_String_o* field, System_Int32_array* fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$RowInts
   System_Int32_array* Dino_BusSand_App_Meta_Monetization__RowInts (System_String_o* id,
   System_String_o* field, System_Int32_array* fallback, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Monetization__RowInts_22663dc
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c05e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    bRam0000000004f9c05e = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(param_1,0);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,param_2,0);
  lVar6 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar5,0);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x18) != 0)) {
    param_3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70);
    puVar3 = PTR_DAT_04cb15c0;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < *(int *)(param_3 + 0x18)) {
      uVar7 = 0;
      do {
        uVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar6,uVar7 & 0xffffffff,*(undefined8 *)puVar3);
        uVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar5,0,0);
        uVar2 = *(uint *)(param_3 + 0x18);
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar1 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(param_3 + lVar1 + 0x20) = uVar4;
      } while ((long)uVar7 < (long)(int)uVar2);
    }
  }
  return param_3;
}

