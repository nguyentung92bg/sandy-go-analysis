/* IL2CPP: Dino.BusSand.App.TweenRunner$$HasOwner
bool Dino_BusSand_App_TweenRunner__HasOwner (Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.TweenRunner$$HasOwner
   bool Dino_BusSand_App_TweenRunner__HasOwner (Il2CppObject* owner, const MethodInfo* method); */

undefined8 Dino_BusSand_App_TweenRunner__HasOwner_2161d04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar1 = PTR_DAT_04cac1f0;
  if ((bRam0000000004f9b835 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac288);
    FUN_02132f7c(PTR_DAT_04cac290);
    FUN_02132f7c(PTR_DAT_04cac298);
    FUN_02132f7c(PTR_DAT_04cac2a0);
    FUN_02132f7c(PTR_DAT_04cac1f0);
    bRam0000000004f9b835 = 1;
  }
  lVar5 = *(long *)puVar1;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_04cac2a0;
  puVar3 = PTR_DAT_04cac290;
  puVar2 = PTR_DAT_04cac288;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 == 0) {
LAB_02261ec8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,lVar5,*(undefined8 *)PTR_DAT_04cac2a0);
  lStack_50 = lStack_68;
  puStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
LAB_02261dd8:
  uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                    (&uStack_60,*(undefined8 *)puVar3);
  if ((uVar6 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_02261ec8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,lVar5,*(undefined8 *)puVar4);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)puVar2);
        return 0;
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while ((*(char *)(lStack_50 + 0x10) == '\0') || (*(long *)(lStack_50 + 0x18) != param_1));
  }
  else {
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(char *)(lStack_50 + 0x10) == '\0') || (*(long *)(lStack_50 + 0x18) != param_1))
    goto LAB_02261dd8;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_60,*(undefined8 *)puVar2);
  return 1;
}

