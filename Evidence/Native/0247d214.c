/* IL2CPP: Dino.BusSand.GameAssets$$GetModel
Dino_BusSand_ModelEntry_o* Dino_BusSand_GameAssets__GetModel (Dino_BusSand_GameAssets_o* __this, System_String_o* modelName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetModel
   Dino_BusSand_ModelEntry_o* Dino_BusSand_GameAssets__GetModel (Dino_BusSand_GameAssets_o* __this,
   System_String_o* modelName, const MethodInfo* method); */

long Dino_BusSand_GameAssets__GetModel_237d214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c816 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb810);
    FUN_02132f7c(PTR_DAT_04cbb818);
    FUN_02132f7c(PTR_DAT_04cbb820);
    FUN_02132f7c(PTR_DAT_04cbb828);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c816 = 1;
  }
  puVar3 = PTR_DAT_04cbb818;
  puVar2 = PTR_DAT_04cbb810;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_58,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbb828);
  do {
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_58,*(undefined8 *)puVar3);
      lVar5 = lStack_48;
      if ((uVar4 & 1) == 0) {
        lVar5 = 0;
        goto LAB_0247d320;
      }
    } while ((lStack_48 == 0) ||
            (uVar4 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_48 + 0x10),param_2,0)
            , (uVar4 & 1) == 0));
    uVar6 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  } while ((uVar4 & 1) == 0);
LAB_0247d320:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_58,*(undefined8 *)puVar2);
  return lVar5;
}

