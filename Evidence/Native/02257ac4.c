/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Reply
void Dino_BusSand_App_QaPilot_Runner__Reply (Dino_BusSand_App_QaPilot_Runner_o* __this, System_String_o* id, bool ok, System_String_o* msg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Reply
   void Dino_BusSand_App_QaPilot_Runner__Reply (Dino_BusSand_App_QaPilot_Runner_o* __this,
   System_String_o* id, bool ok, System_String_o* msg, const MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__Reply_2157ac4
               (undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 auStack_78 [2];
  undefined4 uStack_68;
  byte abStack_54 [4];
  
  puVar3 = PTR_DAT_04ca9b50;
  puVar2 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9b7f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04caba30);
    FUN_02132f7c(PTR_DAT_04caba38);
    FUN_02132f7c(PTR_DAT_04caba40);
    FUN_02132f7c(PTR_DAT_04caba48);
    bRam0000000004f9b7f1 = 1;
  }
  uStack_68 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar6,*(undefined8 *)puVar3);
  puVar5 = PTR_DAT_04caba48;
  puVar4 = PTR_DAT_04caba30;
  puVar3 = PTR_DAT_04caab38;
  puVar2 = PTR_DAT_04caa200;
  if (lVar6 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar6,*(undefined8 *)PTR_DAT_04caba40,param_2,*(undefined8 *)PTR_DAT_04caab38);
    puVar1 = PTR_DAT_04ca9ac8;
    abStack_54[0] = param_3 & 1;
    uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),abStack_54);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar6,*(undefined8 *)puVar4,uVar7,*(undefined8 *)puVar3);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar6,*(undefined8 *)puVar5,param_4,*(undefined8 *)puVar3);
    fVar9 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b890 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b890 = '\x01';
    }
    puVar4 = PTR_DAT_04caba38;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_78[0] = System_Math__Round_48312e4((double)fVar9,2,0,0);
    uVar7 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),auStack_78);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar6,*(undefined8 *)puVar4,uVar7,*(undefined8 *)puVar3);
    uVar7 = Dino_BusSand_App_QaPilot_Runner__get_OutPath_21577c0();
    uVar8 = Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar6);
    uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)PTR_DAT_04caa398,0);
    System_IO_File__AppendAllText_47f9cb8(uVar7,uVar8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

