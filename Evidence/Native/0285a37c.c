/* IL2CPP: Dino.BusSand.GameAssets$$Index<object>
System_Collections_Generic_Dictionary_string__T__o* Dino_BusSand_GameAssets__Index_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_275A37C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0285a4ec) */
/* IL2CPP: Dino.BusSand.GameAssets$$Index<object>
   System_Collections_Generic_Dictionary_string__T__o* Dino_BusSand_GameAssets__Index_object_
   (System_Collections_Generic_List_T__o* list, const MethodInfo_275A37C* method); */

long Dino_BusSand_GameAssets__Index_object__275a37c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_28;
  
  lStack_28 = param_2;
  if ((*(long *)(param_2 + 0x38) == 0) &&
     (FUN_02132f7c(PTR_DAT_04ca9ae8), *(long *)(param_2 + 0x38) == 0)) {
    FUN_0216b4cc(param_2);
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_0216b470();
  }
  lVar4 = thunk_FUN_0216e89c();
  System_Collections_Generic_Dictionary_object__object____ctor_34b3640
            (lVar4,uVar1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18));
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_68,param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20));
  puVar2 = PTR_DAT_04ca9ae8;
  lStack_40 = (long)plStack_58;
  uStack_48 = puStack_60;
  uStack_50 = uStack_68;
  uStack_68 = 0;
  plStack_58 = &lStack_28;
  puStack_60 = &uStack_50;
  while( true ) {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_50,*(undefined8 *)(*(long *)(lStack_28 + 0x38) + 0x50));
      lVar3 = lStack_40;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_50,*(undefined8 *)(*(long *)(lStack_28 + 0x38) + 0x58));
        return lVar4;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    } while ((uVar5 & 1) == 0);
    if (lVar3 == 0) break;
    uVar6 = UnityEngine_Object__get_name_43c71a4(lVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar6,uVar6);
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar4,uVar6,lVar3,*(undefined8 *)(*(long *)(lStack_28 + 0x38) + 0x48));
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

