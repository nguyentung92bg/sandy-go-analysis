/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ResetIapTime
void Dino_BusSand_App_Meta_GameTracking__ResetIapTime (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ResetIapTime
   void Dino_BusSand_App_Meta_GameTracking__ResetIapTime (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__ResetIapTime_22112ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2360);
    FUN_02132f7c(PTR_DAT_04cb2368);
    FUN_02132f7c(PTR_DAT_04cb2370);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2378);
    bRam0000000004f9bd4d = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x68);
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x3c) = 0xbf800000;
  puVar2 = PTR_DAT_04cb2368;
  puVar1 = PTR_DAT_04cb2360;
  if (lVar4 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,lVar4,*(undefined8 *)PTR_DAT_04cb2378);
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_38,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_28 == 0) break;
      *(undefined1 *)(lStack_28 + 0x40) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

