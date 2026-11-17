/* IL2CPP: Dino.BusSand.Core.ColorShuffle$$CanPlan
bool Dino_BusSand_Core_ColorShuffle__CanPlan (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ColorShuffle$$CanPlan
   bool Dino_BusSand_Core_ColorShuffle__CanPlan (Dino_BusSand_Core_StageEngine_o* e, const
   MethodInfo* method); */

bool Dino_BusSand_Core_ColorShuffle__CanPlan_240da84(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_54 [4];
  int iStack_50;
  char cStack_4c;
  
  if ((bRam0000000004f9cb31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe428);
    FUN_02132f7c(PTR_DAT_04cbe430);
    bRam0000000004f9cb31 = 1;
  }
  lVar5 = Dino_BusSand_Core_ColorShuffle__Seats_240d784(param_1);
  puVar3 = PTR_DAT_04cbe430;
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x18);
    bVar8 = 0 < iVar6;
    if (0 < iVar6) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + 1;
        iVar2 = iVar1;
        if (iVar1 < iVar6) {
          do {
            System_Collections_Generic_List_ColorShuffle_Seat___get_Item_3b1fd68
                      (auStack_54,lVar5,iVar7,*(undefined8 *)puVar3);
            iVar6 = iStack_50;
            System_Collections_Generic_List_ColorShuffle_Seat___get_Item_3b1fd68
                      (auStack_54,lVar5,iVar2,*(undefined8 *)puVar3);
            if (iVar6 == iStack_50) {
              System_Collections_Generic_List_ColorShuffle_Seat___get_Item_3b1fd68
                        (auStack_54,lVar5,iVar7,*(undefined8 *)puVar3);
              cVar4 = cStack_4c;
              System_Collections_Generic_List_ColorShuffle_Seat___get_Item_3b1fd68
                        (auStack_54,lVar5,iVar2,*(undefined8 *)puVar3);
              if (cVar4 != cStack_4c) {
                return bVar8;
              }
            }
            iVar6 = *(int *)(lVar5 + 0x18);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar6);
        }
        bVar8 = iVar1 < iVar6;
        iVar7 = iVar1;
      } while (iVar1 < iVar6);
    }
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

