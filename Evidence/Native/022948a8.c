/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$RefreshPositions
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshPositions (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, bool mirror, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$RefreshPositions
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshPositions
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, bool mirror, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshPositions_21948a8
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022948c0 to 02394957 has its CatchHandler @ 02294ae4 */
  if ((bRam0000000004f9b9ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9ba = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  puVar1 = PTR_DAT_04cad6d0;
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar5 = 0xbf800000;
    if ((param_2 & 1) == 0) {
      uVar5 = 0x3f800000;
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_04cad6d0);
    puVar2 = PTR_DAT_04cad698;
    puStack_48 = puStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    uStack_68 = 0;
    puStack_60 = &uStack_50;
                    /* try { // try from 022949a4 to 023949e7 has its CatchHandler @ 02294ae0 */
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_50,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Transform__set_localScale_43d1be0(uVar5,0x3f800000,0x3f800000,lStack_40,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_50,*(undefined8 *)PTR_DAT_04cad688);
    if (*(long *)(param_1 + 0x90) != 0) {
                    /* try { // try from 022949e8 to 02394b1f has its CatchHandler @ 022946d4 */
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_68,*(long *)(param_1 + 0x90),*(undefined8 *)puVar1);
      lStack_40 = lStack_58;
      puStack_48 = puStack_60;
      uStack_50 = uStack_68;
      uStack_68 = 0;
      puStack_60 = &uStack_50;
      while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_50,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_Transform__set_localScale_43d1be0(uVar5,0x3f800000,0x3f800000,lStack_40,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_50,*(undefined8 *)PTR_DAT_04cad688);
      if (*(long *)(param_1 + 0x58) != 0) {
        UnityEngine_Transform__set_localScale_43d1be0
                  (uVar5,0x3f800000,0x3f800000,*(long *)(param_1 + 0x58),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

