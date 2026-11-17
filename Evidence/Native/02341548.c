/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$ReloadAll
void Dino_BusSand_App_Meta_LiveOps__ReloadAll (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$ReloadAll
   void Dino_BusSand_App_Meta_LiveOps__ReloadAll (const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps__ReloadAll_2241548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f8);
    FUN_02132f7c(PTR_DAT_04cb3800);
    FUN_02132f7c(PTR_DAT_04cb3808);
    FUN_02132f7c(PTR_DAT_04cb3818);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3838);
    bRam0000000004f9bf04 = 1;
  }
  lVar4 = *(long *)puVar1;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_04cb3838;
  puVar2 = PTR_DAT_04cb3800;
  puVar1 = PTR_DAT_04cb37f8;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,**(long **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      lVar4 = lStack_38;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_38 == 0) break;
      lVar6 = System_Object__GetType_4876970(lStack_38,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = System_Type__GetMethod_4849f04(lVar6,*(undefined8 *)puVar3,0x24,0);
      if (lVar6 != 0) {
        System_Reflection_MethodBase__Invoke_4772dd4(lVar6,lVar4,0,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

