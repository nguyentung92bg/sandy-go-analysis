/* IL2CPP: Dino.BusSand.App.Lang$$Has
bool Dino_BusSand_App_Lang__Has (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$Has
   bool Dino_BusSand_App_Lang__Has (System_String_o* key, const MethodInfo* method); */

uint Dino_BusSand_App_Lang__Has_215fb88(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_18;
  
                    /* catch() { ... } // from try @ 0225fb78 with catch @ 0225fb98 */
  if ((bRam0000000004f9b81d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c60);
    FUN_02132f7c(PTR_DAT_04cab550);
    bRam0000000004f9b81d = 1;
  }
  uStack_18 = 0;
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Lang__Current_215f3d0();
    uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar4,param_1,&uStack_18);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_Lang__English_215f81c();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                        (lVar5,param_1,*(undefined8 *)PTR_DAT_04ca9c60);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

