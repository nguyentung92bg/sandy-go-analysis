/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$Grant
void Dino_BusSand_App_Meta_PassportFeature__Grant (System_Collections_Generic_List_PassportFeature_Reward__o* rewards, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$Grant
   void Dino_BusSand_App_Meta_PassportFeature__Grant
   (System_Collections_Generic_List_PassportFeature_Reward__o* rewards, System_String_o* reason,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__Grant_22456fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  
  if ((bRam0000000004f9bf4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04caf650);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bf4c = 1;
  }
  puVar3 = PTR_DAT_04caf640;
  puVar2 = PTR_DAT_04caf638;
  puVar1 = PTR_DAT_04cabaf8;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  if (param_1 != 0) {
    System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
              (&uStack_70,param_1,*(undefined8 *)PTR_DAT_04caf650);
    while (uVar6 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                             (&uStack_70,*(undefined8 *)puVar3), lVar5 = lStack_58,
          uVar4 = uStack_60, (uVar6 & 1) != 0) {
      if ((0 < (int)uStack_60) && (0 < lStack_58)) {
        if ((uStack_50 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__Add_2272578(uVar4 & 0xffffffff,lVar5,param_2,0);
        }
        else if ((int)uStack_60 == 0x3ea) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__AddInfiniteHearts_2273010(lVar5,param_2,0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
              (&uStack_70,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

