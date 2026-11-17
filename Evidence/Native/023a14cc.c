/* IL2CPP: Dino.BusSand.App.Gameplay.MechanicIntro$$<Present>g__Scan|1_0
void Dino_BusSand_App_Gameplay_MechanicIntro___Present_g__Scan_1_0 (System_Collections_Generic_List_BusDef__o* buses, Dino_BusSand_App_Gameplay_MechanicIntro___c__DisplayClass1_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.MechanicIntro$$<Present>g__Scan|1_0
   void Dino_BusSand_App_Gameplay_MechanicIntro___Present_g__Scan_1_0
   (System_Collections_Generic_List_BusDef__o* buses,
   Dino_BusSand_App_Gameplay_MechanicIntro___c__DisplayClass1_0_o* , const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_MechanicIntro___Present_g__Scan_1_0_22a14cc
               (long param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c25d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb59a8);
    FUN_02132f7c(PTR_DAT_04cb59b0);
    FUN_02132f7c(PTR_DAT_04cb59b8);
    FUN_02132f7c(PTR_DAT_04cb59c0);
    FUN_02132f7c(PTR_DAT_04cb59c8);
    bRam0000000004f9c25d = 1;
  }
  puVar6 = PTR_DAT_04cb59b0;
  puVar5 = PTR_DAT_04cb59a8;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,param_1,*(undefined8 *)PTR_DAT_04cb59c0);
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar6), (uVar7 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar1 = *(int *)(lStack_38 + 0x34);
      iVar2 = *(int *)(lStack_38 + 0x38);
      *param_2 = *(byte *)(lStack_38 + 0x30) | *param_2;
      param_2[1] = param_2[1] | 0 < iVar1;
      if (iVar2 < 1) {
        bVar9 = 0 < *(int *)(lStack_38 + 0x3c);
      }
      else {
        bVar9 = true;
      }
      bVar3 = *(byte *)(lStack_38 + 0x40);
      iVar1 = *(int *)(lStack_38 + 0x44);
      bVar4 = *(byte *)(lStack_38 + 0x48);
      param_2[2] = bVar9 | param_2[2];
      lVar8 = *(long *)(lStack_38 + 0x50);
      param_2[3] = bVar3 | param_2[3];
      param_2[4] = param_2[4] | 0 < iVar1;
      param_2[5] = bVar4 | param_2[5];
      if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) {
        param_2[6] = 1;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar5);
  }
  return;
}

