/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$LoadBlob<object>
Il2CppObject* Dino_BusSand_App_Meta_LiveOps__LoadBlob_object_ (System_String_o* key, const MethodInfo_27EF244* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$LoadBlob<object>
   Il2CppObject* Dino_BusSand_App_Meta_LiveOps__LoadBlob_object_ (System_String_o* key, const
   MethodInfo_27EF244* method); */

long Dino_BusSand_App_Meta_LiveOps__LoadBlob_object__27ef244(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined4 uStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908);
    FUN_02132f7c(PTR_DAT_04cc4910);
    FUN_02132f7c(PTR_DAT_04cc4918);
    FUN_02132f7c(PTR_DAT_04cc4920);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0216b4cc(param_2);
    }
  }
  puVar1 = PTR_DAT_04cabaf8;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  lStack_70 = 0;
  uStack_88 = 0;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x130), lVar3 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&lStack_a8,lVar3,*(undefined8 *)PTR_DAT_04cc4920);
    puVar1 = PTR_DAT_04cc4910;
    plStack_78 = plStack_a0;
    lStack_80 = lStack_a8;
    lStack_70 = lStack_98;
    plStack_a0 = &lStack_80;
    lStack_a8 = 0;
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&lStack_80,*(undefined8 *)puVar1);
      lVar3 = lStack_70;
      if ((uVar4 & 1) == 0) {
        lVar3 = 0;
        uVar5 = 2;
        goto LAB_028ef494;
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_70 + 0x10),param_1,0);
    } while (((uVar4 & 1) == 0) ||
            (lVar3 = UnityEngine_JsonUtility__FromJson_object__27dae58
                               (*(undefined8 *)(lVar3 + 0x18),**(undefined8 **)(param_2 + 0x38)),
            lVar3 == 0));
    uVar5 = 6;
LAB_028ef494:
    lVar2 = lStack_a8;
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (plStack_a0,*(undefined8 *)PTR_DAT_04cc4908);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213321c(lVar2);
    }
    if ((uVar5 | 2) != 2) {
      return lVar3;
    }
  }
  lVar3 = System_Activator__CreateInstance_object__26307a4
                    (*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
  return lVar3;
}

