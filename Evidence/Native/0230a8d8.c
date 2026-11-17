/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.Parsed$$Set
void Dino_BusSand_App_Meta_EconomySettings_Parsed__Set (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* __this, System_String_o* row, System_String_o* field, Il2CppObject* value, System_String_o* label, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.Parsed$$Set
   void Dino_BusSand_App_Meta_EconomySettings_Parsed__Set
   (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* __this, System_String_o* row, System_String_o*
   field, Il2CppObject* value, System_String_o* label, const MethodInfo* method); */

void Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  if ((bRam0000000004f9bce7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac020);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04cac028);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cab718);
    bRam0000000004f9bce7 = 1;
  }
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0230a96c to 0240ae8b has its CatchHandler @ 0230a96c
                       catch() { ... } // from try @ 0230a96c with catch @ 0230a96c
                       catch() { ... } // from try @ 0230ae94 with catch @ 0230a96c */
    uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0x10),param_2,&lStack_48,*(undefined8 *)PTR_DAT_04cac020)
    ;
    if ((uVar2 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
      System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                (lVar3,*(undefined8 *)PTR_DAT_04ca9b50);
      lStack_48 = lVar3;
      if (lVar6 == 0) goto LAB_0230aa74;
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar6,param_2,lVar3,*(undefined8 *)PTR_DAT_04cac028);
    }
    if (lStack_48 != 0) {
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lStack_48,param_3,param_4,*(undefined8 *)PTR_DAT_04ca9b58);
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)PTR_DAT_04cab718;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar4 = param_5;
            thunk_FUN_02134474(puVar4,param_5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar3,param_5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
LAB_0230aa74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

