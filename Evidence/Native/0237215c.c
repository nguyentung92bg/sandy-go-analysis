/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Find
Dino_BusSand_App_Meta_IntPair_o* Dino_BusSand_App_Meta_Profile__Find (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Find
   Dino_BusSand_App_Meta_IntPair_o* Dino_BusSand_App_Meta_Profile__Find (int32_t id, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_Profile__Find_227215c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f7 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
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
  puVar2 = PTR_DAT_04cad220;
  puVar1 = PTR_DAT_04cad218;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04cad230);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
      break;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = lStack_38;
  } while (*(int *)(lStack_38 + 0x10) != param_1);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return lVar3;
}

